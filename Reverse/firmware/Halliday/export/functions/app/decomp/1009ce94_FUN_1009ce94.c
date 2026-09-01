/* FUN_1009ce94 @ 0x1009ce94 */

void FUN_1009ce94(undefined4 *param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = DAT_1009cec0;
  FUN_1013b700(DAT_1009cec0);
  uVar3 = VectorSignedToFloat(param_1[1],(byte)(in_fpscr >> 0x16) & 3);
  uVar2 = VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x16) & 3);
  FUN_1013b722(uVar2,uVar3,uVar1);
  *DAT_1009cec4 = 0;
  return;
}

