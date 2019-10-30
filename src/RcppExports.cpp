// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// logLik_cpp
double logLik_cpp(const arma::vec& U_means, const arma::mat& sigma, unsigned int M, const arma::vec& group, unsigned int n_levels, unsigned int df, const arma::vec& y, const arma::vec& eta_fef, const arma::mat& Z, const arma::mat& Gamma, const char* family);
RcppExport SEXP _glmmPen_logLik_cpp(SEXP U_meansSEXP, SEXP sigmaSEXP, SEXP MSEXP, SEXP groupSEXP, SEXP n_levelsSEXP, SEXP dfSEXP, SEXP ySEXP, SEXP eta_fefSEXP, SEXP ZSEXP, SEXP GammaSEXP, SEXP familySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type U_means(U_meansSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type M(MSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type group(groupSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_levels(n_levelsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type df(dfSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta_fef(eta_fefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Gamma(GammaSEXP);
    Rcpp::traits::input_parameter< const char* >::type family(familySEXP);
    rcpp_result_gen = Rcpp::wrap(logLik_cpp(U_means, sigma, M, group, n_levels, df, y, eta_fef, Z, Gamma, family));
    return rcpp_result_gen;
END_RCPP
}
// logLik_modif
double logLik_modif(const arma::vec& U_means, const arma::mat& sigma, unsigned int M, const arma::vec& group, unsigned int n_levels, unsigned int df, const arma::vec& y, const arma::vec& eta_fef, const arma::mat& Z, const arma::mat& Gamma, const char* family);
RcppExport SEXP _glmmPen_logLik_modif(SEXP U_meansSEXP, SEXP sigmaSEXP, SEXP MSEXP, SEXP groupSEXP, SEXP n_levelsSEXP, SEXP dfSEXP, SEXP ySEXP, SEXP eta_fefSEXP, SEXP ZSEXP, SEXP GammaSEXP, SEXP familySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type U_means(U_meansSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type M(MSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type group(groupSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_levels(n_levelsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type df(dfSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta_fef(eta_fefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Gamma(GammaSEXP);
    Rcpp::traits::input_parameter< const char* >::type family(familySEXP);
    rcpp_result_gen = Rcpp::wrap(logLik_modif(U_means, sigma, M, group, n_levels, df, y, eta_fef, Z, Gamma, family));
    return rcpp_result_gen;
END_RCPP
}
// logLik_MCI
double logLik_MCI(unsigned int M, const arma::vec& group, unsigned int n_levels, const arma::vec& y, const arma::vec& eta_fef, const arma::mat& Z, const arma::mat& Gamma, const char* family);
RcppExport SEXP _glmmPen_logLik_MCI(SEXP MSEXP, SEXP groupSEXP, SEXP n_levelsSEXP, SEXP ySEXP, SEXP eta_fefSEXP, SEXP ZSEXP, SEXP GammaSEXP, SEXP familySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type M(MSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type group(groupSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_levels(n_levelsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta_fef(eta_fefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Gamma(GammaSEXP);
    Rcpp::traits::input_parameter< const char* >::type family(familySEXP);
    rcpp_result_gen = Rcpp::wrap(logLik_MCI(M, group, n_levels, y, eta_fef, Z, Gamma, family));
    return rcpp_result_gen;
END_RCPP
}
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
List sample_mc_inner_gibbs(arma::mat f, arma::mat z, arma::vec y, arma::vec t, int NMC, arma::vec u0, int trace);
RcppExport SEXP _glmmPen_sample_mc_inner_gibbs(SEXP fSEXP, SEXP zSEXP, SEXP ySEXP, SEXP tSEXP, SEXP NMCSEXP, SEXP u0SEXP, SEXP traceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type f(fSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type t(tSEXP);
    Rcpp::traits::input_parameter< int >::type NMC(NMCSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type u0(u0SEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_mc_inner_gibbs(f, z, y, t, NMC, u0, trace));
    return rcpp_result_gen;
END_RCPP
}
// sample_mc_inner_gibbs2
NumericMatrix sample_mc_inner_gibbs2(arma::mat f, arma::mat z, arma::vec y, arma::vec t, int NMC, arma::vec u0, arma::vec proposal_var, double batch, int trace);
RcppExport SEXP _glmmPen_sample_mc_inner_gibbs2(SEXP fSEXP, SEXP zSEXP, SEXP ySEXP, SEXP tSEXP, SEXP NMCSEXP, SEXP u0SEXP, SEXP proposal_varSEXP, SEXP batchSEXP, SEXP traceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type f(fSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type t(tSEXP);
    Rcpp::traits::input_parameter< int >::type NMC(NMCSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type u0(u0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type proposal_var(proposal_varSEXP);
    Rcpp::traits::input_parameter< double >::type batch(batchSEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_mc_inner_gibbs2(f, z, y, t, NMC, u0, proposal_var, batch, trace));
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
    {"_glmmPen_logLik_cpp", (DL_FUNC) &_glmmPen_logLik_cpp, 11},
    {"_glmmPen_logLik_modif", (DL_FUNC) &_glmmPen_logLik_modif, 11},
    {"_glmmPen_logLik_MCI", (DL_FUNC) &_glmmPen_logLik_MCI, 8},
    {"_glmmPen_sample_mc_inner", (DL_FUNC) &_glmmPen_sample_mc_inner, 6},
    {"_glmmPen_sample_mc_inner_gibbs", (DL_FUNC) &_glmmPen_sample_mc_inner_gibbs, 7},
    {"_glmmPen_sample_mc_inner_gibbs2", (DL_FUNC) &_glmmPen_sample_mc_inner_gibbs2, 9},
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
