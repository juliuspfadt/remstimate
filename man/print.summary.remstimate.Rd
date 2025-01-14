% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/remstimate.R
\name{print.summary.remstimate}
\alias{print.summary.remstimate}
\title{Generate the summary of a remstimate object}
\usage{
\method{print}{summary.remstimate}(summary_out, ...)
}
\arguments{
\item{...}{further arguments to be passed to the 'summary' method}

\item{object}{is a \code{remstimate} object}
}
\description{
A function that prints out the summary of a remstimate object
}
\examples{

# ------------------------------------ #
#       method 'summary' for the       #
#       tie-oriented model: "BSIR"     #
# ------------------------------------ #

# loading data
data(tie_reh)

# specifying linear predictor
tie_model <- ~ 1 +
               remstats::indegreeSender()+
               remstats::inertia()+
               remstats::reciprocity()

# calculating statistics
tie_reh_stats <- remstats::remstats(reh = tie_reh,
                                    tie_effects = tie_model)

# running estimation
tie_mle <- remstimate::remstimate(reh = tie_reh,
                                  stats = tie_reh_stats,
                                  method = "BSIR",
                                  nsim = 100,
                                  ncores = 1)

# summary
summary(tie_mle)

# ------------------------------------ #
#      method 'summary' for the        #
#      actor-oriented model: "BSIR"    #
# ------------------------------------ #

# loading data
data(ao_reh)

# specifying linear predictor (for sender rate and receiver choice model)
rate_model <- ~ 1 + remstats::indegreeSender()
choice_model <- ~ remstats::inertia() + remstats::reciprocity()

# calculating statistics
ao_reh_stats <- remstats::remstats(reh = ao_reh,
                                   sender_effects = rate_model,
                                   receiver_effects = choice_model)

# running estimation
ao_mle <- remstimate::remstimate(reh = ao_reh,
                                 stats = ao_reh_stats,
                                 method = "BSIR",
                                 nsim = 100,
                                 ncores = 1)

# summary
summary(ao_mle)

# ------------------------------------ #
#   for more examples check vignettes  #
# ------------------------------------ #

}
