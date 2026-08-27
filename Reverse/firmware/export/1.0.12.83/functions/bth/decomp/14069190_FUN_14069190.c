/* FUN_14069190 @ 0x14069190 */

void FUN_14069190(int param_1,int param_2,uint param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_14069224 + (param_1 + 0x22) * 4);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406922c,0x526,DAT_14069228);
  }
  iVar2 = *(int *)(iVar2 + param_2 * 4);
  if (iVar2 != 0) {
    if (*(ushort *)(iVar2 + 0xc) <= param_3) {
      *(short *)(iVar2 + 0xc) = (short)param_3;
      if (-1 < (int)((uint)*(ushort *)(iVar2 + 0xe) << 0x17)) {
        FUN_14071478(param_1,*(ushort *)(iVar2 + 0xe) & 0x3f,param_3);
      }
      puVar1 = (undefined1 *)FUN_14074378(0xe09,0,param_1 << 8 | 3,6);
      *puVar1 = (char)param_1;
      *(short *)(puVar1 + 2) = (short)param_3;
      FUN_140743d0();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406922c,0x529,DAT_14069228);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_1406922c,0x527,DAT_14069228);
}

