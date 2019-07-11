// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// sample_mc_inner
NumericMatrix sample_mc_inner(arma::mat f, arma::mat z, arma::vec y, arma::vec t, int NMC, int trace);
RcppExport SEXP _glmmPen_sample_mc_inner(SEXP fSEXP, SEXP zSEXP, SEXP ySEXP, SEXP tSEXP, SEXP NMCSEXP, SEXP traceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type f(fSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type t(tSEXP);
    Rcpp::traits::input_parameter< int >::type NMC(NMCSEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_mc_inner(f, z, y, t, NMC, trace));
    return rcpp_result_gen;
END_RCPP
}
// sample_mc_inner_gibbs
NumericMatrix sample_mc_inner_gibbs(arma::mat f, arma::mat z, arma::vec y, arma::vec t, int NMC, int trace, arma::vec u0);
RcppExport SEXP _glmmPen_sample_mc_inner_gibbs(SEXP fSEXP, SEXP zSEXP, SEXP ySEXP, SEXP tSEXP, SEXP NMCSEXP, SEXP traceSEXP, SEXP u0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type f(fSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type t(tSEXP);
    Rcpp::traits::input_parameter< int >::type NMC(NMCSEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type u0(u0SEXP);
    rcpp_result_gen = Rcpp::wrap(sample_mc_inner_gibbs(f, z, y, t, NMC, trace, u0));
    return rcpp_result_gen;
END_RCPP
}
// arma_test_value
void arma_test_value(arma::mat x);
RcppExport SEXP _glmmPen_arma_test_value(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    arma_test_value(x);
    return R_NilValue;
END_RCPP
}
// arma_test_ref
void arma_test_ref(arma::mat& x);
RcppExport SEXP _glmmPen_arma_test_ref(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    arma_test_ref(x);
    return R_NilValue;
END_RCPP
}
// arma_test_const_ref
void arma_test_const_ref(const arma::mat& x);
RcppExport SEXP _glmmPen_arma_test_const_ref(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    arma_test_const_ref(x);
    return R_NilValue;
END_RCPP
}
// Znew_gen2
void Znew_gen2(const arma::mat& U, const arma::mat& Z, const arma::vec& g, const arma::vec& cols, unsigned int n, unsigned int q, unsigned int d, SEXP pBigMat, arma::sp_mat& J);
RcppExport SEXP _glmmPen_Znew_gen2(SEXP USEXP, SEXP ZSEXP, SEXP gSEXP, SEXP colsSEXP, SEXP nSEXP, SEXP qSEXP, SEXP dSEXP, SEXP pBigMatSEXP, SEXP JSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type g(gSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type cols(colsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type q(qSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type d(dSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat& >::type J(JSEXP);
    Znew_gen2(U, Z, g, cols, n, q, d, pBigMat, J);
    return R_NilValue;
END_RCPP
}
// orthog_inner
NumericMatrix orthog_inner(arma::mat& X, const arma::vec& g, int gmax, int gmin, int n);
RcppExport SEXP _glmmPen_orthog_inner(SEXP XSEXP, SEXP gSEXP, SEXP gmaxSEXP, SEXP gminSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type g(gSEXP);
    Rcpp::traits::input_parameter< int >::type gmax(gmaxSEXP);
    Rcpp::traits::input_parameter< int >::type gmin(gminSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(orthog_inner(X, g, gmax, gmin, n));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_glmmPen_sample_mc_inner", (DL_FUNC) &_glmmPen_sample_mc_inner, 6},
    {"_glmmPen_sample_mc_inner_gibbs", (DL_FUNC) &_glmmPen_sample_mc_inner_gibbs, 7},
    {"_glmmPen_arma_test_value", (DL_FUNC) &_glmmPen_arma_test_value, 1},
    {"_glmmPen_arma_test_ref", (DL_FUNC) &_glmmPen_arma_test_ref, 1},
    {"_glmmPen_arma_test_const_ref", (DL_FUNC) &_glmmPen_arma_test_const_ref, 1},
    {"_glmmPen_Znew_gen2", (DL_FUNC) &_glmmPen_Znew_gen2, 9},
    {"_glmmPen_orthog_inner", (DL_FUNC) &_glmmPen_orthog_inner, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_glmmPen(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
