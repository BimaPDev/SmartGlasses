/* FUN_140dc044 @ 0x140dc044 */

void FUN_140dc044(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_r2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = *DAT_140dc088;
  if (*(int *)(iVar4 + 0x38) == 0) {
    puVar2 = (undefined4 *)FUN_140db6f0(0x18);
    *(undefined4 **)(iVar4 + 0x38) = puVar2;
    puVar3 = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_140da8c8(DAT_140dc090,0x42,0,DAT_140dc08c,param_4);
      puVar3 = extraout_r2;
    }
    uVar1 = DAT_140dc098;
    *puVar2 = DAT_140dc094;
    puVar2[1] = uVar1;
    puVar2[2] = DAT_140dc09c;
    *(undefined2 *)(puVar2 + 3) = 0xb;
    puVar3[4] = 1;
    puVar3[5] = 0;
  }
  iVar4 = *(int *)(iVar4 + 0x38);
  *(undefined4 *)(iVar4 + 0x10) = param_1;
  *(undefined4 *)(iVar4 + 0x14) = 0;
  return;
}

