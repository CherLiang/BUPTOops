//parser_impl.h
#include "parser.h"
//����parser.h��Ϊ��ʹ�������ܼ��һ����
#include "error.h"
#include "lexer.h"

namespace Parser{ //��ʵ�ֵĽ���
    double prim(bool get);
    double term(bool get);
    double expr(bool get);

    using Lexer::get_token;
    using Lexer::curr_tok;
}