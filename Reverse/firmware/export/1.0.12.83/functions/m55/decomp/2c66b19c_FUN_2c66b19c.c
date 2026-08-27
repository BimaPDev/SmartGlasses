/* FUN_2c66b19c @ 0x2c66b19c */

uint FUN_2c66b19c(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *DAT_2c66b1f8;
  if (*(int *)(iVar6 + 0x38) == 0) {
    puVar3 = (undefined4 *)FUN_2c669578(0x18);
    *(undefined4 **)(iVar6 + 0x38) = puVar3;
    uVar2 = DAT_2c66b208;
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c668484(DAT_2c66b200,0x4e,0,DAT_2c66b1fc);
    }
    *puVar3 = DAT_2c66b204;
    puVar3[1] = uVar2;
    puVar3[2] = DAT_2c66b20c;
    *(undefined2 *)(puVar3 + 3) = 0xb;
    puVar3[4] = 1;
    puVar3[5] = 0;
  }
  iVar6 = *(int *)(iVar6 + 0x38);
  lVar1 = (ulonglong)*(uint *)(iVar6 + 0x10) * (ulonglong)DAT_2c66b214;
  uVar4 = (uint)lVar1;
  uVar5 = DAT_2c66b214 * *(int *)(iVar6 + 0x14) + *(uint *)(iVar6 + 0x10) * DAT_2c66b210 +
          (int)((ulonglong)lVar1 >> 0x20) + (uint)(0xfffffffe < uVar4);
  *(uint *)(iVar6 + 0x10) = uVar4 + 1;
  *(uint *)(iVar6 + 0x14) = uVar5;
  return uVar5 & 0x7fffffff;
}

