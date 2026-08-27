/* FUN_140dc0a0 @ 0x140dc0a0 */

uint FUN_140dc0a0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *DAT_140dc0fc;
  if (*(int *)(iVar6 + 0x38) == 0) {
    puVar3 = (undefined4 *)FUN_140db6f0(0x18);
    *(undefined4 **)(iVar6 + 0x38) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_140da8c8(DAT_140dc104,0x4e,0,DAT_140dc100);
    }
    uVar2 = DAT_140dc10c;
    *puVar3 = DAT_140dc108;
    puVar3[1] = uVar2;
    puVar3[2] = DAT_140dc110;
    *(undefined2 *)(puVar3 + 3) = 0xb;
    puVar3[4] = 1;
    puVar3[5] = 0;
  }
  iVar6 = *(int *)(iVar6 + 0x38);
  lVar1 = (ulonglong)*(uint *)(iVar6 + 0x10) * (ulonglong)DAT_140dc118;
  uVar4 = (uint)lVar1;
  uVar5 = DAT_140dc118 * *(int *)(iVar6 + 0x14) + *(uint *)(iVar6 + 0x10) * DAT_140dc114 +
          (int)((ulonglong)lVar1 >> 0x20) + (uint)(0xfffffffe < uVar4);
  *(uint *)(iVar6 + 0x10) = uVar4 + 1;
  *(uint *)(iVar6 + 0x14) = uVar5;
  return uVar5 & 0x7fffffff;
}

