/* FUN_2c5ef87c @ 0x2c5ef87c */

undefined4 * FUN_2c5ef87c(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)FUN_2c5fee3c(param_4,0x52);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_1;
    uVar1 = *(undefined2 *)(param_1 + 1);
    *(undefined1 *)((int)puVar2 + 6) = *(undefined1 *)((int)param_1 + 6);
    *(undefined2 *)(puVar2 + 1) = uVar1;
    iVar3 = FUN_2c674668(puVar2 + 0xc,param_2,param_3);
    *(undefined1 *)(iVar3 + param_3) = 0;
    puVar2[0xb] = param_4;
    *(undefined1 *)((int)puVar2 + 7) = 0;
    puVar2[10] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
  }
  return puVar2;
}

