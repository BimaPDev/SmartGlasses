/* FUN_14037ed8 @ 0x14037ed8 */

void FUN_14037ed8(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_14037f9c;
  if (param_1 == 0) {
    *(uint *)(DAT_14037f9c + 0x228) = *(uint *)(DAT_14037f9c + 0x228) & 0x9fffffff | 0x60000000;
    *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) & 0xf0ffffff | 0x2000000;
    *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) & 0xff007fff | 0x258000;
    return;
  }
  if (param_1 == 1) {
    *(uint *)(DAT_14037f9c + 0x228) = *(uint *)(DAT_14037f9c + 0x228) & 0x9fffffff;
    *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) & 0xf0ffffff | 0xb000000;
    *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) & 0xff007fff | 0x320000;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_14037fa4,DAT_14037fa0,param_1);
}

