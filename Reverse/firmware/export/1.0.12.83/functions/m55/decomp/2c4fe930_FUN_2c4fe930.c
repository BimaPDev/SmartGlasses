/* FUN_2c4fe930 @ 0x2c4fe930 */

undefined4 * FUN_2c4fe930(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  
  puVar1 = (undefined4 *)lv_mem_alloc(0x20);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c4fea10,0x465,DAT_2c4fea0c,DAT_2c4fea08,DAT_2c4fea18);
  }
  puVar1[3] = param_2;
  puVar1[4] = param_2;
  *(undefined2 *)((int)puVar1 + 0x16) = 0;
  sVar5 = *(short *)(param_1 + 0x34) + 1;
  *(short *)(param_1 + 0x34) = sVar5;
  *(short *)(puVar1 + 5) = sVar5;
  iVar3 = *(int *)(param_1 + 0x44);
  if (iVar3 != 0) {
    puVar1[2] = iVar3;
    *(byte *)(iVar3 + 0x18) = *(byte *)(iVar3 + 0x18) & 0xf0 | *(byte *)(iVar3 + 0x18) + 1 & 0xf;
    piVar2 = (int *)FUN_2c4fe3e8(param_1);
    iVar3 = puVar1[2];
    sVar5 = *(short *)(*piVar2 + 8);
    if (*(int *)(iVar3 + 8) == 0) {
      *(undefined4 **)(iVar3 + 8) = puVar1;
      iVar3 = *(int *)(puVar1[2] + 0x1c);
      puVar1[6] = iVar3;
      puVar1[7] = iVar3 + sVar5;
      *(undefined4 **)(puVar1[2] + 0xc) = puVar1;
      iVar3 = *(int *)(param_1 + 0x3c);
    }
    else {
      iVar4 = (int)(short)piVar2[6] + *(int *)(*(int *)(iVar3 + 0xc) + 0x1c);
      puVar1[6] = iVar4;
      puVar1[7] = iVar4 + sVar5;
      *(undefined4 **)(iVar3 + 0xc) = puVar1;
      iVar3 = *(int *)(param_1 + 0x3c);
    }
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 4) = puVar1;
      *puVar1 = *(undefined4 *)(param_1 + 0x3c);
      *(undefined4 **)(param_1 + 0x3c) = puVar1;
      puVar1[1] = 0;
      return puVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c4fea10,0x47d,DAT_2c4fea0c,DAT_2c4fea08,DAT_2c4fea04);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c4fea10,0x46b,DAT_2c4fea0c,DAT_2c4fea08,DAT_2c4fea14);
}

