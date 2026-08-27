/* FUN_1407529c @ 0x1407529c */

undefined4 FUN_1407529c(int *param_1,int param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *param_1;
  uVar1 = *(ushort *)(iVar4 + 6);
  iVar3 = param_2 + 0x7f >> 7;
  if (iVar3 * 0x80 <= (int)(uint)uVar1) {
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x20;
    return 1;
  }
  uVar5 = iVar3 << 7;
  puVar2 = (undefined4 *)FUN_140759b8((uVar5 & 0xffff) + 0x10);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(short *)((int)puVar2 + 6) = (short)uVar5;
    *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x20;
    FUN_140e5278(puVar2 + 4,iVar4 + 0x10,*(undefined2 *)(iVar4 + 6));
    *(undefined2 *)((int)puVar2 + 10) = *(undefined2 *)(iVar4 + 10);
    *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(iVar4 + 8);
    if (-1 < (int)((uint)*(byte *)(iVar4 + 4) << 0x1b)) {
      if ((int)((uint)*(byte *)(iVar4 + 4) << 0x19) < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x42,DAT_14075350);
      }
      FUN_14075b28(iVar4);
    }
    *param_1 = (int)puVar2;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x43,DAT_14075354,(uint)uVar1,param_2,uVar5);
}

