/* FUN_1007dbdc @ 0x1007dbdc */

undefined4 FUN_1007dbdc(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  if ((3 < *(byte *)(*param_1 + 0x10)) &&
     (pcVar1 = *(code **)(*param_1 + 0xc), pcVar1 != (code *)0x0)) {
    (*pcVar1)(PTR_s_Debug___s__d_spinand_flush_____1007dc28,PTR_s_spinand_flush_1007dc24,0x9b,pcVar1
              ,param_4);
  }
  FUN_10120ccc(param_1);
  if (param_2 == 0) {
    if ((3 < *(byte *)(*param_1 + 0x10)) &&
       (pcVar1 = *(code **)(*param_1 + 0xc), pcVar1 != (code *)0x0)) {
      (*pcVar1)(PTR_s_Debug___s__d_spinand_flush_zonet_1007dc2c,PTR_s_spinand_flush_1007dc24,0x9e);
    }
    FUN_1007ebf8(param_1);
    FUN_101208e6(param_1,0);
  }
  return 0;
}

