// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// warningMessage
std::string warningMessage(arma::uword cond);
RcppExport SEXP _remstimate_warningMessage(SEXP condSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uword >::type cond(condSEXP);
    rcpp_result_gen = Rcpp::wrap(warningMessage(cond));
    return rcpp_result_gen;
END_RCPP
}
// errorMessage
std::string errorMessage(arma::uword cond);
RcppExport SEXP _remstimate_errorMessage(SEXP condSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uword >::type cond(condSEXP);
    rcpp_result_gen = Rcpp::wrap(errorMessage(cond));
    return rcpp_result_gen;
END_RCPP
}
// getRiskset
arma::mat getRiskset(arma::uvec actorID, arma::uvec typeID, arma::uword N, arma::uword C);
RcppExport SEXP _remstimate_getRiskset(SEXP actorIDSEXP, SEXP typeIDSEXP, SEXP NSEXP, SEXP CSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec >::type actorID(actorIDSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type typeID(typeIDSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type N(NSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type C(CSEXP);
    rcpp_result_gen = Rcpp::wrap(getRiskset(actorID, typeID, N, C));
    return rcpp_result_gen;
END_RCPP
}
// getRisksetCube
arma::ucube getRisksetCube(arma::umat risksetMatrix, arma::uword N, arma::uword C);
RcppExport SEXP _remstimate_getRisksetCube(SEXP risksetMatrixSEXP, SEXP NSEXP, SEXP CSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::umat >::type risksetMatrix(risksetMatrixSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type N(NSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type C(CSEXP);
    rcpp_result_gen = Rcpp::wrap(getRisksetCube(risksetMatrix, N, C));
    return rcpp_result_gen;
END_RCPP
}
// convertEdgelist
Rcpp::DataFrame convertEdgelist(Rcpp::DataFrame edgelist, Rcpp::List actorsDictionary, Rcpp::List typesDictionary, arma::uword M);
RcppExport SEXP _remstimate_convertEdgelist(SEXP edgelistSEXP, SEXP actorsDictionarySEXP, SEXP typesDictionarySEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type actorsDictionary(actorsDictionarySEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type typesDictionary(typesDictionarySEXP);
    Rcpp::traits::input_parameter< arma::uword >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(convertEdgelist(edgelist, actorsDictionary, typesDictionary, M));
    return rcpp_result_gen;
END_RCPP
}
// lpd
double lpd(arma::vec pars, arma::mat stats, arma::uvec event, double interevent_time);
RcppExport SEXP _remstimate_lpd(SEXP parsSEXP, SEXP statsSEXP, SEXP eventSEXP, SEXP interevent_timeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type pars(parsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type stats(statsSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type event(eventSEXP);
    Rcpp::traits::input_parameter< double >::type interevent_time(interevent_timeSEXP);
    rcpp_result_gen = Rcpp::wrap(lpd(pars, stats, event, interevent_time));
    return rcpp_result_gen;
END_RCPP
}
// nllik
double nllik(arma::vec pars, arma::cube stats, arma::umat event_binary, arma::vec interevent_time, int threads);
RcppExport SEXP _remstimate_nllik(SEXP parsSEXP, SEXP statsSEXP, SEXP event_binarySEXP, SEXP interevent_timeSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type pars(parsSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type stats(statsSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type event_binary(event_binarySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type interevent_time(interevent_timeSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(nllik(pars, stats, event_binary, interevent_time, threads));
    return rcpp_result_gen;
END_RCPP
}
// cube_to_matrix
arma::mat cube_to_matrix(arma::cube S);
RcppExport SEXP _remstimate_cube_to_matrix(SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(cube_to_matrix(S));
    return rcpp_result_gen;
END_RCPP
}
// get_unique_vectors
arma::mat get_unique_vectors(const arma::mat& A);
RcppExport SEXP _remstimate_get_unique_vectors(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(get_unique_vectors(A));
    return rcpp_result_gen;
END_RCPP
}
// get_events_index
arma::uvec get_events_index(const arma::mat& edgelist, const arma::mat& riskset);
RcppExport SEXP _remstimate_get_events_index(SEXP edgelistSEXP, SEXP risksetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type riskset(risksetSEXP);
    rcpp_result_gen = Rcpp::wrap(get_events_index(edgelist, riskset));
    return rcpp_result_gen;
END_RCPP
}
// compute_q
arma::vec compute_q(const arma::vec& index, const arma::mat& edgelist, const arma::mat& U, const arma::cube& S);
RcppExport SEXP _remstimate_compute_q(SEXP indexSEXP, SEXP edgelistSEXP, SEXP USEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type index(indexSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_q(index, edgelist, U, S));
    return rcpp_result_gen;
END_RCPP
}
// compute_m
arma::vec compute_m(const arma::vec& index, const arma::mat& edgelist, const arma::mat& U, const arma::cube& S);
RcppExport SEXP _remstimate_compute_m(SEXP indexSEXP, SEXP edgelistSEXP, SEXP USEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type index(indexSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_m(index, edgelist, U, S));
    return rcpp_result_gen;
END_RCPP
}
// logLike
double logLike(arma::vec beta, const arma::mat& U, const arma::vec q, const arma::vec m);
RcppExport SEXP _remstimate_logLike(SEXP betaSEXP, SEXP USEXP, SEXP qSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type q(qSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(logLike(beta, U, q, m));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_remstimate_warningMessage", (DL_FUNC) &_remstimate_warningMessage, 1},
    {"_remstimate_errorMessage", (DL_FUNC) &_remstimate_errorMessage, 1},
    {"_remstimate_getRiskset", (DL_FUNC) &_remstimate_getRiskset, 4},
    {"_remstimate_getRisksetCube", (DL_FUNC) &_remstimate_getRisksetCube, 3},
    {"_remstimate_convertEdgelist", (DL_FUNC) &_remstimate_convertEdgelist, 4},
    {"_remstimate_lpd", (DL_FUNC) &_remstimate_lpd, 4},
    {"_remstimate_nllik", (DL_FUNC) &_remstimate_nllik, 5},
    {"_remstimate_cube_to_matrix", (DL_FUNC) &_remstimate_cube_to_matrix, 1},
    {"_remstimate_get_unique_vectors", (DL_FUNC) &_remstimate_get_unique_vectors, 1},
    {"_remstimate_get_events_index", (DL_FUNC) &_remstimate_get_events_index, 2},
    {"_remstimate_compute_q", (DL_FUNC) &_remstimate_compute_q, 4},
    {"_remstimate_compute_m", (DL_FUNC) &_remstimate_compute_m, 4},
    {"_remstimate_logLike", (DL_FUNC) &_remstimate_logLike, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_remstimate(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
