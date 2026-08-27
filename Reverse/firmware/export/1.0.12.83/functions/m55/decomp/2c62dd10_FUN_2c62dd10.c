/* FUN_2c62dd10 @ 0x2c62dd10 */

undefined4 FUN_2c62dd10(int *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  
  if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c62de1c,0x53,DAT_2c62de18,DAT_2c62de24);
  }
  cVar1 = *param_2;
  puVar3 = (undefined4 *)FUN_2c62ca10(DAT_2c62de10);
  uVar2 = DAT_2c62de10;
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c62de1c,0x5b,DAT_2c62de18,DAT_2c62de14,param_2);
    }
    pcVar5 = (char *)*puVar3;
    if (*pcVar5 == cVar1) break;
    puVar3 = (undefined4 *)FUN_2c62ca20(uVar2);
  }
  if ((*(code **)(pcVar5 + 4) != (code *)0x0) &&
     (iVar4 = (**(code **)(pcVar5 + 4))(pcVar5), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c62de1c,0x61,DAT_2c62de18,DAT_2c62de20,param_2);
  }
  if (*(code **)(pcVar5 + 8) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c62de1c,0x67,DAT_2c62de18,DAT_2c62de28,param_2);
  }
  if (param_2[1] == ':') {
    param_2 = param_2 + 2;
  }
  else {
    param_2 = param_2 + 1;
  }
  iVar4 = (**(code **)(pcVar5 + 8))(pcVar5,param_2,param_3);
  if (0xfffffffc < iVar4 - 1U && iVar4 != -2) {
    return 0xc;
  }
  *param_1 = iVar4;
  param_1[1] = (int)pcVar5;
  if (*(short *)(pcVar5 + 2) != 0) {
    iVar4 = lv_mem_alloc(0x10);
    param_1[2] = iVar4;
    FUN_2c62c3b0(iVar4,0x10);
    *(undefined4 *)param_1[2] = 0xffffffff;
    *(undefined4 *)(param_1[2] + 4) = 0xfffffffe;
    return 0;
  }
  return 0;
}

