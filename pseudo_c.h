/*
 * Esoteric pseudocode mini-library for C language. Version 1.
 * I have no idea why you would want to use something like this but whatever
 * In case someone doesn't get it: This library is made as a joke,
 * don't take it too seriously... or do, I don't care to be honest.
 * See examples here:
 * https://github.com/CrusaderSVK287/Pseudo-C-library/tree/master/examples.
 * Run "make" in command line to compile and run all examples or
 * "make example_name", see makefile
 * to understand how the "library" works. As licence says:
 *
 *           DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 *                  Version 2, December 2004
 *
 * Copyright (C) 2022 Lukáš Belán
 *
 * Everyone is permitted to copy and distribute verbatim or modified
 * copies of this license document, and changing it is allowed as long
 * as the name is changed.
 *
 *           DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 * TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION
 *
 * 0. You just DO WHAT THE FUCK YOU WANT TO.
 */

#ifndef PSEUDO_C_H
#define PSEUDO_C_H

#ifdef __cplusplus
extern "C" {
#endif

/* Declaring functions */
#define PROCEDURE(_NAME, _ARG) 		void _NAME(_ARG)
#define BEGIN				{{
#define END 				}}

/* Operators */
#define AND				&&
#define OR				||
#define NOT				!
#define IS                              ==
#define IS_NOT                           !=
#define IS_LESS                         <
#define IS_MORE                         >
#define IS_LESS_OR_EQUAL                <=
#define IS_MORE_OR_EQUAL                >=
#define INCREMENT                       ++
#define DECREMENT                       --

/* Variable definition and value set */

/* __auto_type is not defined in c++ */
#ifndef __cplusplus
#define LET(_NAME, _VAL)                __auto_type _NAME = _VAL;
#endif /* __cplusplus */

#define SET(_A)                         _A
#define TO(_B)                          = _B;

/* If else statements */
#define IF(_COND) 			if (_COND)
#define THEN(_CODE) 			{_CODE}
#define ELSE(_CODE) 			else {_CODE}

/* Loops */
#define STEP
#define UNTIL
#define DO				{
#define FOR(_SET, _STEP, _UNTIL)	for (_SET _UNTIL; _STEP) {
#define WHILE(_COND)			while (_COND) {

/* Switch */
#define WITH(_VAL)                      switch(_VAL
#define SWITCH                          ){
#define IN_CASE_OF(_CASE)               case _CASE:
#define EXECUTE(_CODE)                  {_CODE break;}
#define END_SWITCH                      default:break;}

/* Operations */
#define SWAP(_A, _B)			{int _t = _A; _A = _B; _B = _t;}

#define INCREASE(_A)                    _A +=
#define DECREASE(_A)                    _A -=
#define MULTIPLY(_A)                    _A *=
#define DIVIDE(_A)                      _A /=
#define BY(_B)                          _B;

#ifdef __cplusplus
}
#endif

#endif /* PSEUDO_C_H */
