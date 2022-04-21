#ifndef LLVM_CLANG_SEMA_JYTESTHINT_H
#define LLVM_CLANG_SEMA_JYTESTHINT_H

#include "clang/Basic/IdentifierTable.h"
#include "clang/Basic/SourceLocation.h"
#include "clang/Sema/ParsedAttr.h"
#include "clang/Sema/Ownership.h"

namespace clang {
struct JytestHint {
  SourceRange Range;
  IdentifierLoc *PragmaNameLoc;
  IdentifierLoc *OptionLoc;
  Expr *ValueExprF;
  Expr *ValueExpr;

  JytestHint()
      : PragmaNameLoc(nullptr), OptionLoc(nullptr), ValueExprF(nullptr), ValueExpr(nullptr) {}
};

}
#endif // LLVM_CLANG_SEMA_JYTESTHINT_H
