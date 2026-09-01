/* FUN_1007df68 @ 0x1007df68 */

void FUN_1007df68(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *extraout_r2;
  undefined4 uVar2;
  
  cVar1 = FUN_1007ddd0(param_1,param_2,param_1,param_4,param_4);
  uVar2 = DAT_1007df94;
  if (((cVar1 != '\0') && (uVar2 = DAT_1007df98, cVar1 != '\x01')) &&
     (uVar2 = DAT_1007df9c, cVar1 != '\x02')) {
    uVar2 = DAT_1007dfa0;
  }
  **(undefined4 **)(*extraout_r2 + 8) = uVar2;
  return;
}

