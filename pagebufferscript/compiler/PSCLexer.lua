local parserLib = require "parserLib"
local Lexer = parserLib.Lexer
local class = require "class"

local PSCLexer = class(Lexer)

function PSCLexer:init(scanner) 
	self.Super.init(self,scanner)
	self
		:addKeywords "function" "end" "(" ")" ":" "+" "*" "/" "," "return"
	self
		:addRecognizer("comment", "^%-%-[^\n]+.?")
		:addRecognizer("word", "^[a-zA-Z_][a-zA-Z0-9_]*")
		:addRecognizer("whitespace","^%s+")
		:addRecognizer("string", '^""')
		:addRecognizer("string", '^"[^\n]-[^\\]"')
		:addRecognizer("integerDec", "^[0-9]+")
end

return PSCLexer