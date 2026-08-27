/* FUN_2c66b140 @ 0x2c66b140 */

void FUN_2c66b140(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *DAT_2c66b184;
  if (*(int *)(iVar3 + 0x38) == 0) {
    puVar2 = (undefined4 *)FUN_2c669578(0x18);
    *(undefined4 **)(iVar3 + 0x38) = puVar2;
    uVar1 = DAT_2c66b194;
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c668484(DAT_2c66b18c,0x42,0,DAT_2c66b188,param_4);
    }
    *puVar2 = DAT_2c66b190;
    puVar2[1] = uVar1;
    puVar2[2] = DAT_2c66b198;
    *(undefined2 *)(puVar2 + 3) = 0xb;
    puVar2[4] = 1;
    puVar2[5] = 0;
  }
  iVar3 = *(int *)(iVar3 + 0x38);
  *(undefined4 *)(iVar3 + 0x10) = param_1;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  return;
}

