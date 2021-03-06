// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// GetHubInfos
Rcpp::List GetHubInfos(Rcpp::NumericMatrix m, double tn_p, std::size_t k);
RcppExport SEXP _MRHCA_GetHubInfos(SEXP mSEXP, SEXP tn_pSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type tn_p(tn_pSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(GetHubInfos(m, tn_p, k));
    return rcpp_result_gen;
END_RCPP
}
// GetMrEm
Rcpp::List GetMrEm(Rcpp::NumericMatrix m, double tn_p, std::size_t k);
RcppExport SEXP _MRHCA_GetMrEm(SEXP mSEXP, SEXP tn_pSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type tn_p(tn_pSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(GetMrEm(m, tn_p, k));
    return rcpp_result_gen;
END_RCPP
}
// GetMrhcaFast
Rcpp::List GetMrhcaFast(Rcpp::NumericMatrix m, std::vector<std::vector<int>> mr_em, std::size_t k, std::size_t step_size);
RcppExport SEXP _MRHCA_GetMrhcaFast(SEXP mSEXP, SEXP mr_emSEXP, SEXP kSEXP, SEXP step_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< std::vector<std::vector<int>> >::type mr_em(mr_emSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type k(kSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type step_size(step_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(GetMrhcaFast(m, mr_em, k, step_size));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MRHCA_GetHubInfos", (DL_FUNC) &_MRHCA_GetHubInfos, 3},
    {"_MRHCA_GetMrEm", (DL_FUNC) &_MRHCA_GetMrEm, 3},
    {"_MRHCA_GetMrhcaFast", (DL_FUNC) &_MRHCA_GetMrhcaFast, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_MRHCA(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
