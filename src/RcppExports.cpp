// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// warningMessage
std::string warningMessage(int cond);
RcppExport SEXP _remstimate_warningMessage(SEXP condSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type cond(condSEXP);
    rcpp_result_gen = Rcpp::wrap(warningMessage(cond));
    return rcpp_result_gen;
END_RCPP
}
// errorMessage
std::string errorMessage(int cond);
RcppExport SEXP _remstimate_errorMessage(SEXP condSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type cond(condSEXP);
    rcpp_result_gen = Rcpp::wrap(errorMessage(cond));
    return rcpp_result_gen;
END_RCPP
}
// remDerivativesStandard
Rcpp::List remDerivativesStandard(const arma::vec& pars, const arma::cube& stats, const arma::uvec& dyad, const Rcpp::List& omit_dyad, const arma::vec& interevent_time, bool ordinal, int ncores, bool gradient, bool hessian);
RcppExport SEXP _remstimate_remDerivativesStandard(SEXP parsSEXP, SEXP statsSEXP, SEXP dyadSEXP, SEXP omit_dyadSEXP, SEXP interevent_timeSEXP, SEXP ordinalSEXP, SEXP ncoresSEXP, SEXP gradientSEXP, SEXP hessianSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type pars(parsSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type stats(statsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type dyad(dyadSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type omit_dyad(omit_dyadSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type interevent_time(interevent_timeSEXP);
    Rcpp::traits::input_parameter< bool >::type ordinal(ordinalSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    Rcpp::traits::input_parameter< bool >::type gradient(gradientSEXP);
    Rcpp::traits::input_parameter< bool >::type hessian(hessianSEXP);
    rcpp_result_gen = Rcpp::wrap(remDerivativesStandard(pars, stats, dyad, omit_dyad, interevent_time, ordinal, ncores, gradient, hessian));
    return rcpp_result_gen;
END_RCPP
}
// remDerivativesSenderRates
Rcpp::List remDerivativesSenderRates(const arma::vec& pars, const arma::cube& stats, const arma::uvec& actor1, const Rcpp::List& omit_dyad, const arma::vec& interevent_time, int C, int D, bool ordinal, bool gradient, bool hessian);
RcppExport SEXP _remstimate_remDerivativesSenderRates(SEXP parsSEXP, SEXP statsSEXP, SEXP actor1SEXP, SEXP omit_dyadSEXP, SEXP interevent_timeSEXP, SEXP CSEXP, SEXP DSEXP, SEXP ordinalSEXP, SEXP gradientSEXP, SEXP hessianSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type pars(parsSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type stats(statsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type actor1(actor1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type omit_dyad(omit_dyadSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type interevent_time(interevent_timeSEXP);
    Rcpp::traits::input_parameter< int >::type C(CSEXP);
    Rcpp::traits::input_parameter< int >::type D(DSEXP);
    Rcpp::traits::input_parameter< bool >::type ordinal(ordinalSEXP);
    Rcpp::traits::input_parameter< bool >::type gradient(gradientSEXP);
    Rcpp::traits::input_parameter< bool >::type hessian(hessianSEXP);
    rcpp_result_gen = Rcpp::wrap(remDerivativesSenderRates(pars, stats, actor1, omit_dyad, interevent_time, C, D, ordinal, gradient, hessian));
    return rcpp_result_gen;
END_RCPP
}
// remDerivativesReceiverChoice
Rcpp::List remDerivativesReceiverChoice(const arma::vec& pars, const arma::cube& stats, const arma::uvec& actor1, const arma::uvec& actor2, const Rcpp::List& omit_dyad, const arma::vec& interevent_time, int N, int C, int D, bool gradient, bool hessian);
RcppExport SEXP _remstimate_remDerivativesReceiverChoice(SEXP parsSEXP, SEXP statsSEXP, SEXP actor1SEXP, SEXP actor2SEXP, SEXP omit_dyadSEXP, SEXP interevent_timeSEXP, SEXP NSEXP, SEXP CSEXP, SEXP DSEXP, SEXP gradientSEXP, SEXP hessianSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type pars(parsSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type stats(statsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type actor1(actor1SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type actor2(actor2SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type omit_dyad(omit_dyadSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type interevent_time(interevent_timeSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type C(CSEXP);
    Rcpp::traits::input_parameter< int >::type D(DSEXP);
    Rcpp::traits::input_parameter< bool >::type gradient(gradientSEXP);
    Rcpp::traits::input_parameter< bool >::type hessian(hessianSEXP);
    rcpp_result_gen = Rcpp::wrap(remDerivativesReceiverChoice(pars, stats, actor1, actor2, omit_dyad, interevent_time, N, C, D, gradient, hessian));
    return rcpp_result_gen;
END_RCPP
}
// remDerivatives
Rcpp::List remDerivatives(const arma::vec& pars, const arma::cube& stats, const arma::uvec& actor1, const arma::uvec& actor2, const arma::uvec& dyad, const Rcpp::List& omit_dyad, const arma::vec& interevent_time, std::string model, bool ordinal, int ncores, bool gradient, bool hessian, bool senderRate, Rcpp::Nullable<int> N, Rcpp::Nullable<int> C, Rcpp::Nullable<int> D);
RcppExport SEXP _remstimate_remDerivatives(SEXP parsSEXP, SEXP statsSEXP, SEXP actor1SEXP, SEXP actor2SEXP, SEXP dyadSEXP, SEXP omit_dyadSEXP, SEXP interevent_timeSEXP, SEXP modelSEXP, SEXP ordinalSEXP, SEXP ncoresSEXP, SEXP gradientSEXP, SEXP hessianSEXP, SEXP senderRateSEXP, SEXP NSEXP, SEXP CSEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type pars(parsSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type stats(statsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type actor1(actor1SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type actor2(actor2SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type dyad(dyadSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type omit_dyad(omit_dyadSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type interevent_time(interevent_timeSEXP);
    Rcpp::traits::input_parameter< std::string >::type model(modelSEXP);
    Rcpp::traits::input_parameter< bool >::type ordinal(ordinalSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    Rcpp::traits::input_parameter< bool >::type gradient(gradientSEXP);
    Rcpp::traits::input_parameter< bool >::type hessian(hessianSEXP);
    Rcpp::traits::input_parameter< bool >::type senderRate(senderRateSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type N(NSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type C(CSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(remDerivatives(pars, stats, actor1, actor2, dyad, omit_dyad, interevent_time, model, ordinal, ncores, gradient, hessian, senderRate, N, C, D));
    return rcpp_result_gen;
END_RCPP
}
// GDADAMAX
Rcpp::List GDADAMAX(const arma::vec& pars, const arma::cube& stats, const arma::uvec& actor1, const arma::uvec& actor2, const arma::uvec& dyad, const Rcpp::List& omit_dyad, const arma::vec& interevent_time, std::string model, bool ordinal, bool senderRate, bool gradient, bool hessian, Rcpp::Nullable<int> N, Rcpp::Nullable<int> C, Rcpp::Nullable<int> D, int ncores, int epochs, double learning_rate, double beta1, double beta2, double epsilon);
RcppExport SEXP _remstimate_GDADAMAX(SEXP parsSEXP, SEXP statsSEXP, SEXP actor1SEXP, SEXP actor2SEXP, SEXP dyadSEXP, SEXP omit_dyadSEXP, SEXP interevent_timeSEXP, SEXP modelSEXP, SEXP ordinalSEXP, SEXP senderRateSEXP, SEXP gradientSEXP, SEXP hessianSEXP, SEXP NSEXP, SEXP CSEXP, SEXP DSEXP, SEXP ncoresSEXP, SEXP epochsSEXP, SEXP learning_rateSEXP, SEXP beta1SEXP, SEXP beta2SEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type pars(parsSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type stats(statsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type actor1(actor1SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type actor2(actor2SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type dyad(dyadSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type omit_dyad(omit_dyadSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type interevent_time(interevent_timeSEXP);
    Rcpp::traits::input_parameter< std::string >::type model(modelSEXP);
    Rcpp::traits::input_parameter< bool >::type ordinal(ordinalSEXP);
    Rcpp::traits::input_parameter< bool >::type senderRate(senderRateSEXP);
    Rcpp::traits::input_parameter< bool >::type gradient(gradientSEXP);
    Rcpp::traits::input_parameter< bool >::type hessian(hessianSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type N(NSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type C(CSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type D(DSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    Rcpp::traits::input_parameter< int >::type epochs(epochsSEXP);
    Rcpp::traits::input_parameter< double >::type learning_rate(learning_rateSEXP);
    Rcpp::traits::input_parameter< double >::type beta1(beta1SEXP);
    Rcpp::traits::input_parameter< double >::type beta2(beta2SEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(GDADAMAX(pars, stats, actor1, actor2, dyad, omit_dyad, interevent_time, model, ordinal, senderRate, gradient, hessian, N, C, D, ncores, epochs, learning_rate, beta1, beta2, epsilon));
    return rcpp_result_gen;
END_RCPP
}
// logPostHMC
double logPostHMC(const arma::vec& meanPrior, const arma::mat& sigmaPrior, const arma::vec& pars, const arma::cube& stats, const arma::uvec& actor1, const arma::uvec& actor2, const arma::uvec& dyad, const Rcpp::List& omit_dyad, const arma::vec& interevent_time, std::string model, bool ordinal, int ncores, bool senderRate, Rcpp::Nullable<int> N, Rcpp::Nullable<int> C, Rcpp::Nullable<int> D);
RcppExport SEXP _remstimate_logPostHMC(SEXP meanPriorSEXP, SEXP sigmaPriorSEXP, SEXP parsSEXP, SEXP statsSEXP, SEXP actor1SEXP, SEXP actor2SEXP, SEXP dyadSEXP, SEXP omit_dyadSEXP, SEXP interevent_timeSEXP, SEXP modelSEXP, SEXP ordinalSEXP, SEXP ncoresSEXP, SEXP senderRateSEXP, SEXP NSEXP, SEXP CSEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type meanPrior(meanPriorSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sigmaPrior(sigmaPriorSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type pars(parsSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type stats(statsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type actor1(actor1SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type actor2(actor2SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type dyad(dyadSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type omit_dyad(omit_dyadSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type interevent_time(interevent_timeSEXP);
    Rcpp::traits::input_parameter< std::string >::type model(modelSEXP);
    Rcpp::traits::input_parameter< bool >::type ordinal(ordinalSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    Rcpp::traits::input_parameter< bool >::type senderRate(senderRateSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type N(NSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type C(CSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(logPostHMC(meanPrior, sigmaPrior, pars, stats, actor1, actor2, dyad, omit_dyad, interevent_time, model, ordinal, ncores, senderRate, N, C, D));
    return rcpp_result_gen;
END_RCPP
}
// logPostGradientHMC
arma::vec logPostGradientHMC(const arma::vec& meanPrior, const arma::mat& sigmaPrior, const arma::vec& pars, const arma::cube& stats, const arma::uvec& actor1, const arma::uvec& actor2, const arma::uvec& dyad, const Rcpp::List& omit_dyad, const arma::vec& interevent_time, std::string model, bool ordinal, int ncores, bool senderRate, Rcpp::Nullable<int> N, Rcpp::Nullable<int> C, Rcpp::Nullable<int> D);
RcppExport SEXP _remstimate_logPostGradientHMC(SEXP meanPriorSEXP, SEXP sigmaPriorSEXP, SEXP parsSEXP, SEXP statsSEXP, SEXP actor1SEXP, SEXP actor2SEXP, SEXP dyadSEXP, SEXP omit_dyadSEXP, SEXP interevent_timeSEXP, SEXP modelSEXP, SEXP ordinalSEXP, SEXP ncoresSEXP, SEXP senderRateSEXP, SEXP NSEXP, SEXP CSEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type meanPrior(meanPriorSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sigmaPrior(sigmaPriorSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type pars(parsSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type stats(statsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type actor1(actor1SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type actor2(actor2SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type dyad(dyadSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type omit_dyad(omit_dyadSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type interevent_time(interevent_timeSEXP);
    Rcpp::traits::input_parameter< std::string >::type model(modelSEXP);
    Rcpp::traits::input_parameter< bool >::type ordinal(ordinalSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    Rcpp::traits::input_parameter< bool >::type senderRate(senderRateSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type N(NSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type C(CSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(logPostGradientHMC(meanPrior, sigmaPrior, pars, stats, actor1, actor2, dyad, omit_dyad, interevent_time, model, ordinal, ncores, senderRate, N, C, D));
    return rcpp_result_gen;
END_RCPP
}
// iterHMC
arma::field<arma::vec> iterHMC(arma::uword L, double epsilon, const arma::vec& meanPrior, const arma::mat& sigmaPrior, const arma::vec& pars, const arma::cube& stats, const arma::uvec& actor1, const arma::uvec& actor2, const arma::uvec& dyad, const Rcpp::List& omit_dyad, const arma::vec& interevent_time, std::string model, bool ordinal, int ncores, bool senderRate, Rcpp::Nullable<int> N, Rcpp::Nullable<int> C, Rcpp::Nullable<int> D);
RcppExport SEXP _remstimate_iterHMC(SEXP LSEXP, SEXP epsilonSEXP, SEXP meanPriorSEXP, SEXP sigmaPriorSEXP, SEXP parsSEXP, SEXP statsSEXP, SEXP actor1SEXP, SEXP actor2SEXP, SEXP dyadSEXP, SEXP omit_dyadSEXP, SEXP interevent_timeSEXP, SEXP modelSEXP, SEXP ordinalSEXP, SEXP ncoresSEXP, SEXP senderRateSEXP, SEXP NSEXP, SEXP CSEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uword >::type L(LSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type meanPrior(meanPriorSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sigmaPrior(sigmaPriorSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type pars(parsSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type stats(statsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type actor1(actor1SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type actor2(actor2SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type dyad(dyadSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type omit_dyad(omit_dyadSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type interevent_time(interevent_timeSEXP);
    Rcpp::traits::input_parameter< std::string >::type model(modelSEXP);
    Rcpp::traits::input_parameter< bool >::type ordinal(ordinalSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    Rcpp::traits::input_parameter< bool >::type senderRate(senderRateSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type N(NSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type C(CSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(iterHMC(L, epsilon, meanPrior, sigmaPrior, pars, stats, actor1, actor2, dyad, omit_dyad, interevent_time, model, ordinal, ncores, senderRate, N, C, D));
    return rcpp_result_gen;
END_RCPP
}
// burninHMC
Rcpp::List burninHMC(const arma::cube& samples, const arma::mat& loglik, arma::uword burnin, arma::uword thin);
RcppExport SEXP _remstimate_burninHMC(SEXP samplesSEXP, SEXP loglikSEXP, SEXP burninSEXP, SEXP thinSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cube& >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type loglik(loglikSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type thin(thinSEXP);
    rcpp_result_gen = Rcpp::wrap(burninHMC(samples, loglik, burnin, thin));
    return rcpp_result_gen;
END_RCPP
}
// HMC
Rcpp::List HMC(arma::mat pars_init, arma::uword nsim, arma::uword nchains, arma::uword burnin, const arma::vec& meanPrior, const arma::mat& sigmaPrior, const arma::cube& stats, const arma::uvec& actor1, const arma::uvec& actor2, const arma::uvec& dyad, const Rcpp::List& omit_dyad, const arma::vec& interevent_time, std::string model, bool ordinal, int ncores, bool senderRate, Rcpp::Nullable<int> N, Rcpp::Nullable<int> C, Rcpp::Nullable<int> D, arma::uword thin, arma::uword L, double epsilon);
RcppExport SEXP _remstimate_HMC(SEXP pars_initSEXP, SEXP nsimSEXP, SEXP nchainsSEXP, SEXP burninSEXP, SEXP meanPriorSEXP, SEXP sigmaPriorSEXP, SEXP statsSEXP, SEXP actor1SEXP, SEXP actor2SEXP, SEXP dyadSEXP, SEXP omit_dyadSEXP, SEXP interevent_timeSEXP, SEXP modelSEXP, SEXP ordinalSEXP, SEXP ncoresSEXP, SEXP senderRateSEXP, SEXP NSEXP, SEXP CSEXP, SEXP DSEXP, SEXP thinSEXP, SEXP LSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type pars_init(pars_initSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type nsim(nsimSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type nchains(nchainsSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type meanPrior(meanPriorSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sigmaPrior(sigmaPriorSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type stats(statsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type actor1(actor1SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type actor2(actor2SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type dyad(dyadSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type omit_dyad(omit_dyadSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type interevent_time(interevent_timeSEXP);
    Rcpp::traits::input_parameter< std::string >::type model(modelSEXP);
    Rcpp::traits::input_parameter< bool >::type ordinal(ordinalSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    Rcpp::traits::input_parameter< bool >::type senderRate(senderRateSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type N(NSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type C(CSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type D(DSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type L(LSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(HMC(pars_init, nsim, nchains, burnin, meanPrior, sigmaPrior, stats, actor1, actor2, dyad, omit_dyad, interevent_time, model, ordinal, ncores, senderRate, N, C, D, thin, L, epsilon));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_remstimate_warningMessage", (DL_FUNC) &_remstimate_warningMessage, 1},
    {"_remstimate_errorMessage", (DL_FUNC) &_remstimate_errorMessage, 1},
    {"_remstimate_remDerivativesStandard", (DL_FUNC) &_remstimate_remDerivativesStandard, 9},
    {"_remstimate_remDerivativesSenderRates", (DL_FUNC) &_remstimate_remDerivativesSenderRates, 10},
    {"_remstimate_remDerivativesReceiverChoice", (DL_FUNC) &_remstimate_remDerivativesReceiverChoice, 11},
    {"_remstimate_remDerivatives", (DL_FUNC) &_remstimate_remDerivatives, 16},
    {"_remstimate_GDADAMAX", (DL_FUNC) &_remstimate_GDADAMAX, 21},
    {"_remstimate_logPostHMC", (DL_FUNC) &_remstimate_logPostHMC, 16},
    {"_remstimate_logPostGradientHMC", (DL_FUNC) &_remstimate_logPostGradientHMC, 16},
    {"_remstimate_iterHMC", (DL_FUNC) &_remstimate_iterHMC, 18},
    {"_remstimate_burninHMC", (DL_FUNC) &_remstimate_burninHMC, 4},
    {"_remstimate_HMC", (DL_FUNC) &_remstimate_HMC, 22},
    {NULL, NULL, 0}
};

RcppExport void R_init_remstimate(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
