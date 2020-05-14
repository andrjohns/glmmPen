// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// IRLS
arma::vec IRLS(arma::vec y, arma::mat X, arma::vec mu, arma::vec weights, arma::vec z, arma::vec dims);
RcppExport SEXP _glmmPen_IRLS(SEXP ySEXP, SEXP XSEXP, SEXP muSEXP, SEXP weightsSEXP, SEXP zSEXP, SEXP dimsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type dims(dimsSEXP);
    rcpp_result_gen = Rcpp::wrap(IRLS(y, X, mu, weights, z, dims));
    return rcpp_result_gen;
END_RCPP
}
// soft_thresh
double soft_thresh(double zeta, double lambda);
RcppExport SEXP _glmmPen_soft_thresh(SEXP zetaSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type zeta(zetaSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(soft_thresh(zeta, lambda));
    return rcpp_result_gen;
END_RCPP
}
// MCP_soln
double MCP_soln(double zeta, double nu, double lambda, double gamma, double alpha);
RcppExport SEXP _glmmPen_MCP_soln(SEXP zetaSEXP, SEXP nuSEXP, SEXP lambdaSEXP, SEXP gammaSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type zeta(zetaSEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(MCP_soln(zeta, nu, lambda, gamma, alpha));
    return rcpp_result_gen;
END_RCPP
}
// SCAD_soln
double SCAD_soln(double zeta, double nu, double lambda, double gamma, double alpha);
RcppExport SEXP _glmmPen_SCAD_soln(SEXP zetaSEXP, SEXP nuSEXP, SEXP lambdaSEXP, SEXP gammaSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type zeta(zetaSEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(SCAD_soln(zeta, nu, lambda, gamma, alpha));
    return rcpp_result_gen;
END_RCPP
}
// coord_desc
arma::vec coord_desc(arma::vec y, arma::mat X, arma::vec weights, arma::vec resid, arma::vec eta, arma::vec offset, arma::vec dims, arma::vec beta, const char* penalty, double lambda, double gamma, double alpha, const char* family, int link);
RcppExport SEXP _glmmPen_coord_desc(SEXP ySEXP, SEXP XSEXP, SEXP weightsSEXP, SEXP residSEXP, SEXP etaSEXP, SEXP offsetSEXP, SEXP dimsSEXP, SEXP betaSEXP, SEXP penaltySEXP, SEXP lambdaSEXP, SEXP gammaSEXP, SEXP alphaSEXP, SEXP familySEXP, SEXP linkSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type resid(residSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type dims(dimsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const char* >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const char* >::type family(familySEXP);
    Rcpp::traits::input_parameter< int >::type link(linkSEXP);
    rcpp_result_gen = Rcpp::wrap(coord_desc(y, X, weights, resid, eta, offset, dims, beta, penalty, lambda, gamma, alpha, family, link));
    return rcpp_result_gen;
END_RCPP
}
// grp_CD
arma::vec grp_CD(arma::vec y, arma::mat X, arma::vec weights, arma::vec resid, arma::vec eta, arma::vec dims, arma::vec beta, arma::vec group_X, arma::vec K_X, const char* penalty, double lambda, double gamma, double alpha, const char* family, int link);
RcppExport SEXP _glmmPen_grp_CD(SEXP ySEXP, SEXP XSEXP, SEXP weightsSEXP, SEXP residSEXP, SEXP etaSEXP, SEXP dimsSEXP, SEXP betaSEXP, SEXP group_XSEXP, SEXP K_XSEXP, SEXP penaltySEXP, SEXP lambdaSEXP, SEXP gammaSEXP, SEXP alphaSEXP, SEXP familySEXP, SEXP linkSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type resid(residSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type dims(dimsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type group_X(group_XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type K_X(K_XSEXP);
    Rcpp::traits::input_parameter< const char* >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const char* >::type family(familySEXP);
    Rcpp::traits::input_parameter< int >::type link(linkSEXP);
    rcpp_result_gen = Rcpp::wrap(grp_CD(y, X, weights, resid, eta, dims, beta, group_X, K_X, penalty, lambda, gamma, alpha, family, link));
    return rcpp_result_gen;
END_RCPP
}
// glm_fit
arma::vec glm_fit(arma::vec y, arma::mat X, arma::vec dims, arma::vec beta, arma::vec offset, const char* family, int link, int fit_type, arma::vec group_X, arma::vec K_X, const char* penalty, double lambda, arma::vec params);
RcppExport SEXP _glmmPen_glm_fit(SEXP ySEXP, SEXP XSEXP, SEXP dimsSEXP, SEXP betaSEXP, SEXP offsetSEXP, SEXP familySEXP, SEXP linkSEXP, SEXP fit_typeSEXP, SEXP group_XSEXP, SEXP K_XSEXP, SEXP penaltySEXP, SEXP lambdaSEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type dims(dimsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< const char* >::type family(familySEXP);
    Rcpp::traits::input_parameter< int >::type link(linkSEXP);
    Rcpp::traits::input_parameter< int >::type fit_type(fit_typeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type group_X(group_XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type K_X(K_XSEXP);
    Rcpp::traits::input_parameter< const char* >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(glm_fit(y, X, dims, beta, offset, family, link, fit_type, group_X, K_X, penalty, lambda, params));
    return rcpp_result_gen;
END_RCPP
}
// grp_CD_XZ_B1
arma::vec grp_CD_XZ_B1(const arma::vec& y, const arma::mat& X, const arma::mat& Z, const arma::vec& group, const arma::mat& u, const arma::sp_mat& J_q, arma::vec dims, arma::vec beta, const arma::vec& offset, const char* family, int link, int init, const arma::uvec& XZ_group, arma::uvec K, const char* penalty, arma::vec params);
RcppExport SEXP _glmmPen_grp_CD_XZ_B1(SEXP ySEXP, SEXP XSEXP, SEXP ZSEXP, SEXP groupSEXP, SEXP uSEXP, SEXP J_qSEXP, SEXP dimsSEXP, SEXP betaSEXP, SEXP offsetSEXP, SEXP familySEXP, SEXP linkSEXP, SEXP initSEXP, SEXP XZ_groupSEXP, SEXP KSEXP, SEXP penaltySEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type group(groupSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type J_q(J_qSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type dims(dimsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< const char* >::type family(familySEXP);
    Rcpp::traits::input_parameter< int >::type link(linkSEXP);
    Rcpp::traits::input_parameter< int >::type init(initSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type XZ_group(XZ_groupSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type K(KSEXP);
    Rcpp::traits::input_parameter< const char* >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(grp_CD_XZ_B1(y, X, Z, group, u, J_q, dims, beta, offset, family, link, init, XZ_group, K, penalty, params));
    return rcpp_result_gen;
END_RCPP
}
// grp_CD_XZ_B1_std
arma::vec grp_CD_XZ_B1_std(const arma::vec& y, const arma::mat& X, const arma::mat& Z, const arma::vec& group, const arma::mat& u, const arma::sp_mat& J_q, arma::vec dims, arma::vec beta, const arma::vec& offset, const char* family, int link, int init, const arma::uvec& XZ_group, arma::uvec K, const char* penalty, arma::vec params);
RcppExport SEXP _glmmPen_grp_CD_XZ_B1_std(SEXP ySEXP, SEXP XSEXP, SEXP ZSEXP, SEXP groupSEXP, SEXP uSEXP, SEXP J_qSEXP, SEXP dimsSEXP, SEXP betaSEXP, SEXP offsetSEXP, SEXP familySEXP, SEXP linkSEXP, SEXP initSEXP, SEXP XZ_groupSEXP, SEXP KSEXP, SEXP penaltySEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type group(groupSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type J_q(J_qSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type dims(dimsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< const char* >::type family(familySEXP);
    Rcpp::traits::input_parameter< int >::type link(linkSEXP);
    Rcpp::traits::input_parameter< int >::type init(initSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type XZ_group(XZ_groupSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type K(KSEXP);
    Rcpp::traits::input_parameter< const char* >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(grp_CD_XZ_B1_std(y, X, Z, group, u, J_q, dims, beta, offset, family, link, init, XZ_group, K, penalty, params));
    return rcpp_result_gen;
END_RCPP
}
// grp_CD_XZ_B2
arma::vec grp_CD_XZ_B2(const arma::vec& y, const arma::mat& X, const arma::mat& Z, const arma::vec& group, const arma::mat& u, const arma::sp_mat& J_q, arma::vec dims, arma::vec beta, const arma::vec& offset, const char* family, int link, int init, const arma::uvec& XZ_group, arma::uvec K, const char* penalty, arma::vec params);
RcppExport SEXP _glmmPen_grp_CD_XZ_B2(SEXP ySEXP, SEXP XSEXP, SEXP ZSEXP, SEXP groupSEXP, SEXP uSEXP, SEXP J_qSEXP, SEXP dimsSEXP, SEXP betaSEXP, SEXP offsetSEXP, SEXP familySEXP, SEXP linkSEXP, SEXP initSEXP, SEXP XZ_groupSEXP, SEXP KSEXP, SEXP penaltySEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type group(groupSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type J_q(J_qSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type dims(dimsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< const char* >::type family(familySEXP);
    Rcpp::traits::input_parameter< int >::type link(linkSEXP);
    Rcpp::traits::input_parameter< int >::type init(initSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type XZ_group(XZ_groupSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type K(KSEXP);
    Rcpp::traits::input_parameter< const char* >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(grp_CD_XZ_B2(y, X, Z, group, u, J_q, dims, beta, offset, family, link, init, XZ_group, K, penalty, params));
    return rcpp_result_gen;
END_RCPP
}
// grp_CD_XZ_B2_std
arma::vec grp_CD_XZ_B2_std(const arma::vec& y, const arma::mat& X, const arma::mat& Z, const arma::vec& group, const arma::mat& u, const arma::sp_mat& J_q, arma::vec dims, arma::vec beta, const arma::vec& offset, const char* family, int link, int init, const arma::uvec& XZ_group, arma::uvec K, const char* penalty, arma::vec params);
RcppExport SEXP _glmmPen_grp_CD_XZ_B2_std(SEXP ySEXP, SEXP XSEXP, SEXP ZSEXP, SEXP groupSEXP, SEXP uSEXP, SEXP J_qSEXP, SEXP dimsSEXP, SEXP betaSEXP, SEXP offsetSEXP, SEXP familySEXP, SEXP linkSEXP, SEXP initSEXP, SEXP XZ_groupSEXP, SEXP KSEXP, SEXP penaltySEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type group(groupSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type J_q(J_qSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type dims(dimsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< const char* >::type family(familySEXP);
    Rcpp::traits::input_parameter< int >::type link(linkSEXP);
    Rcpp::traits::input_parameter< int >::type init(initSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type XZ_group(XZ_groupSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type K(KSEXP);
    Rcpp::traits::input_parameter< const char* >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(grp_CD_XZ_B2_std(y, X, Z, group, u, J_q, dims, beta, offset, family, link, init, XZ_group, K, penalty, params));
    return rcpp_result_gen;
END_RCPP
}
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
NumericMatrix sample_mc_inner_gibbs2(arma::mat f, arma::mat z, arma::vec y, arma::vec t, int NMC, arma::vec u0, arma::rowvec proposal_SD, double batch, double batch_length, double offset, double burnin_batchnum, int trace);
RcppExport SEXP _glmmPen_sample_mc_inner_gibbs2(SEXP fSEXP, SEXP zSEXP, SEXP ySEXP, SEXP tSEXP, SEXP NMCSEXP, SEXP u0SEXP, SEXP proposal_SDSEXP, SEXP batchSEXP, SEXP batch_lengthSEXP, SEXP offsetSEXP, SEXP burnin_batchnumSEXP, SEXP traceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type f(fSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type t(tSEXP);
    Rcpp::traits::input_parameter< int >::type NMC(NMCSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type u0(u0SEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type proposal_SD(proposal_SDSEXP);
    Rcpp::traits::input_parameter< double >::type batch(batchSEXP);
    Rcpp::traits::input_parameter< double >::type batch_length(batch_lengthSEXP);
    Rcpp::traits::input_parameter< double >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< double >::type burnin_batchnum(burnin_batchnumSEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_mc_inner_gibbs2(f, z, y, t, NMC, u0, proposal_SD, batch, batch_length, offset, burnin_batchnum, trace));
    return rcpp_result_gen;
END_RCPP
}
// sample_mc_gibbs_adapt_rw
arma::mat sample_mc_gibbs_adapt_rw(arma::mat f, arma::mat z, arma::vec y, int NMC, arma::vec u0, arma::rowvec proposal_SD, int batch, int batch_length, int offset, int burnin_batchnum, int trace);
RcppExport SEXP _glmmPen_sample_mc_gibbs_adapt_rw(SEXP fSEXP, SEXP zSEXP, SEXP ySEXP, SEXP NMCSEXP, SEXP u0SEXP, SEXP proposal_SDSEXP, SEXP batchSEXP, SEXP batch_lengthSEXP, SEXP offsetSEXP, SEXP burnin_batchnumSEXP, SEXP traceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type f(fSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type NMC(NMCSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type u0(u0SEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type proposal_SD(proposal_SDSEXP);
    Rcpp::traits::input_parameter< int >::type batch(batchSEXP);
    Rcpp::traits::input_parameter< int >::type batch_length(batch_lengthSEXP);
    Rcpp::traits::input_parameter< int >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< int >::type burnin_batchnum(burnin_batchnumSEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_mc_gibbs_adapt_rw(f, z, y, NMC, u0, proposal_SD, batch, batch_length, offset, burnin_batchnum, trace));
    return rcpp_result_gen;
END_RCPP
}
// posterior
arma::mat posterior(arma::vec yk, arma::mat Xk, arma::mat Zk, arma::vec beta_fef, int q, int M, arma::mat sigma, arma::vec uold, arma::rowvec proposal_SD_k, int batch, int batch_length, int offset, int burnin_batchnum, int trace);
RcppExport SEXP _glmmPen_posterior(SEXP ykSEXP, SEXP XkSEXP, SEXP ZkSEXP, SEXP beta_fefSEXP, SEXP qSEXP, SEXP MSEXP, SEXP sigmaSEXP, SEXP uoldSEXP, SEXP proposal_SD_kSEXP, SEXP batchSEXP, SEXP batch_lengthSEXP, SEXP offsetSEXP, SEXP burnin_batchnumSEXP, SEXP traceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type yk(ykSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xk(XkSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Zk(ZkSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta_fef(beta_fefSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type uold(uoldSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type proposal_SD_k(proposal_SD_kSEXP);
    Rcpp::traits::input_parameter< int >::type batch(batchSEXP);
    Rcpp::traits::input_parameter< int >::type batch_length(batch_lengthSEXP);
    Rcpp::traits::input_parameter< int >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< int >::type burnin_batchnum(burnin_batchnumSEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    rcpp_result_gen = Rcpp::wrap(posterior(yk, Xk, Zk, beta_fef, q, M, sigma, uold, proposal_SD_k, batch, batch_length, offset, burnin_batchnum, trace));
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
// invlink
arma::vec invlink(int link, arma::vec eta);
RcppExport SEXP _glmmPen_invlink(SEXP linkSEXP, SEXP etaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type link(linkSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type eta(etaSEXP);
    rcpp_result_gen = Rcpp::wrap(invlink(link, eta));
    return rcpp_result_gen;
END_RCPP
}
// Qfun
double Qfun(const arma::vec& y, const arma::mat& X, const arma::mat& Z, const arma::mat& u, const arma::vec& group, const arma::sp_mat& J_q, const arma::vec& beta, const arma::vec offset, arma::vec dims, const char* family, int link);
RcppExport SEXP _glmmPen_Qfun(SEXP ySEXP, SEXP XSEXP, SEXP ZSEXP, SEXP uSEXP, SEXP groupSEXP, SEXP J_qSEXP, SEXP betaSEXP, SEXP offsetSEXP, SEXP dimsSEXP, SEXP familySEXP, SEXP linkSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type group(groupSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type J_q(J_qSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type dims(dimsSEXP);
    Rcpp::traits::input_parameter< const char* >::type family(familySEXP);
    Rcpp::traits::input_parameter< int >::type link(linkSEXP);
    rcpp_result_gen = Rcpp::wrap(Qfun(y, X, Z, u, group, J_q, beta, offset, dims, family, link));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_glmmPen_IRLS", (DL_FUNC) &_glmmPen_IRLS, 6},
    {"_glmmPen_soft_thresh", (DL_FUNC) &_glmmPen_soft_thresh, 2},
    {"_glmmPen_MCP_soln", (DL_FUNC) &_glmmPen_MCP_soln, 5},
    {"_glmmPen_SCAD_soln", (DL_FUNC) &_glmmPen_SCAD_soln, 5},
    {"_glmmPen_coord_desc", (DL_FUNC) &_glmmPen_coord_desc, 14},
    {"_glmmPen_grp_CD", (DL_FUNC) &_glmmPen_grp_CD, 15},
    {"_glmmPen_glm_fit", (DL_FUNC) &_glmmPen_glm_fit, 13},
    {"_glmmPen_grp_CD_XZ_B1", (DL_FUNC) &_glmmPen_grp_CD_XZ_B1, 16},
    {"_glmmPen_grp_CD_XZ_B1_std", (DL_FUNC) &_glmmPen_grp_CD_XZ_B1_std, 16},
    {"_glmmPen_grp_CD_XZ_B2", (DL_FUNC) &_glmmPen_grp_CD_XZ_B2, 16},
    {"_glmmPen_grp_CD_XZ_B2_std", (DL_FUNC) &_glmmPen_grp_CD_XZ_B2_std, 16},
    {"_glmmPen_logLik_cpp", (DL_FUNC) &_glmmPen_logLik_cpp, 11},
    {"_glmmPen_logLik_modif", (DL_FUNC) &_glmmPen_logLik_modif, 11},
    {"_glmmPen_logLik_MCI", (DL_FUNC) &_glmmPen_logLik_MCI, 8},
    {"_glmmPen_sample_mc_inner", (DL_FUNC) &_glmmPen_sample_mc_inner, 6},
    {"_glmmPen_sample_mc_inner_gibbs", (DL_FUNC) &_glmmPen_sample_mc_inner_gibbs, 7},
    {"_glmmPen_sample_mc_inner_gibbs2", (DL_FUNC) &_glmmPen_sample_mc_inner_gibbs2, 12},
    {"_glmmPen_sample_mc_gibbs_adapt_rw", (DL_FUNC) &_glmmPen_sample_mc_gibbs_adapt_rw, 11},
    {"_glmmPen_posterior", (DL_FUNC) &_glmmPen_posterior, 14},
    {"_glmmPen_arma_test_value", (DL_FUNC) &_glmmPen_arma_test_value, 1},
    {"_glmmPen_arma_test_ref", (DL_FUNC) &_glmmPen_arma_test_ref, 1},
    {"_glmmPen_arma_test_const_ref", (DL_FUNC) &_glmmPen_arma_test_const_ref, 1},
    {"_glmmPen_Znew_gen2", (DL_FUNC) &_glmmPen_Znew_gen2, 9},
    {"_glmmPen_orthog_inner", (DL_FUNC) &_glmmPen_orthog_inner, 5},
    {"_glmmPen_invlink", (DL_FUNC) &_glmmPen_invlink, 2},
    {"_glmmPen_Qfun", (DL_FUNC) &_glmmPen_Qfun, 11},
    {NULL, NULL, 0}
};

RcppExport void R_init_glmmPen(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
