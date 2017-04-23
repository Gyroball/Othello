#include "piece.h"

Piece::Piece(string type)
        : m_type(type)
{

}
Piece::Piece()
:m_type(".")
{

}

 string Piece::getType()const
{
    return m_type;
}
void Piece::setType(string type)
{
    m_type=type;
}

Piece::~Piece()
{

}
