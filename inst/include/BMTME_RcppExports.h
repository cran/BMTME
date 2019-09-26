// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_BMTME_RCPPEXPORTS_H_GEN_
#define RCPP_BMTME_RCPPEXPORTS_H_GEN_

#include <RcppArmadillo.h>
#include <Rcpp.h>

namespace BMTME {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("BMTME", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("BMTME", "_BMTME_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in BMTME");
            }
        }
    }

    inline arma::mat wishart(unsigned int df, const arma::mat& S) {
        typedef SEXP(*Ptr_wishart)(SEXP,SEXP);
        static Ptr_wishart p_wishart = NULL;
        if (p_wishart == NULL) {
            validateSignature("arma::mat(*wishart)(unsigned int,const arma::mat&)");
            p_wishart = (Ptr_wishart)R_GetCCallable("BMTME", "_BMTME_wishart");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_wishart(Shield<SEXP>(Rcpp::wrap(df)), Shield<SEXP>(Rcpp::wrap(S)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::mat inv_wishart(unsigned int df, const arma::mat& S) {
        typedef SEXP(*Ptr_inv_wishart)(SEXP,SEXP);
        static Ptr_inv_wishart p_inv_wishart = NULL;
        if (p_inv_wishart == NULL) {
            validateSignature("arma::mat(*inv_wishart)(unsigned int,const arma::mat&)");
            p_inv_wishart = (Ptr_inv_wishart)R_GetCCallable("BMTME", "_BMTME_inv_wishart");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_inv_wishart(Shield<SEXP>(Rcpp::wrap(df)), Shield<SEXP>(Rcpp::wrap(S)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::rowvec MVnormvv(arma::vec mean, const arma::mat& S) {
        typedef SEXP(*Ptr_MVnormvv)(SEXP,SEXP);
        static Ptr_MVnormvv p_MVnormvv = NULL;
        if (p_MVnormvv == NULL) {
            validateSignature("arma::rowvec(*MVnormvv)(arma::vec,const arma::mat&)");
            p_MVnormvv = (Ptr_MVnormvv)R_GetCCallable("BMTME", "_BMTME_MVnormvv");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_MVnormvv(Shield<SEXP>(Rcpp::wrap(mean)), Shield<SEXP>(Rcpp::wrap(S)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::rowvec >(rcpp_result_gen);
    }

    inline arma::mat MatMul(arma::mat& X, arma::mat& Y) {
        typedef SEXP(*Ptr_MatMul)(SEXP,SEXP);
        static Ptr_MatMul p_MatMul = NULL;
        if (p_MatMul == NULL) {
            validateSignature("arma::mat(*MatMul)(arma::mat&,arma::mat&)");
            p_MatMul = (Ptr_MatMul)R_GetCCallable("BMTME", "_BMTME_MatMul");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_MatMul(Shield<SEXP>(Rcpp::wrap(X)), Shield<SEXP>(Rcpp::wrap(Y)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::mat Krone(const arma::mat& A, const arma::mat& B) {
        typedef SEXP(*Ptr_Krone)(SEXP,SEXP);
        static Ptr_Krone p_Krone = NULL;
        if (p_Krone == NULL) {
            validateSignature("arma::mat(*Krone)(const arma::mat&,const arma::mat&)");
            p_Krone = (Ptr_Krone)R_GetCCallable("BMTME", "_BMTME_Krone");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_Krone(Shield<SEXP>(Rcpp::wrap(A)), Shield<SEXP>(Rcpp::wrap(B)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

}

#endif // RCPP_BMTME_RCPPEXPORTS_H_GEN_
