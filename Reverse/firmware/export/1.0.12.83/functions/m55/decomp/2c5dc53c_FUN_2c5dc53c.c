/* FUN_2c5dc53c @ 0x2c5dc53c */

undefined1 *
FUN_2c5dc53c(undefined1 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)FUN_2c47245c(0,0x18);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x18,DAT_2c5dc5d8,DAT_2c5dc5d4,DAT_2c5dc5d0);
  }
  *puVar1 = param_1;
  *(undefined4 *)(puVar1 + 0x10) = param_5;
  *(undefined4 *)(puVar1 + 4) = param_2;
  *(int *)(puVar1 + 8) = param_3;
  *(undefined4 *)(puVar1 + 0x14) = param_6;
  if ((param_3 != 0) && (param_4 != 0)) {
    iVar2 = FUN_2c47245c(0,param_3 + 1);
    *(int *)(puVar1 + 0xc) = iVar2;
    if (iVar2 != 0) {
      FUN_2c674268(iVar2,0,param_3 + 1);
      FUN_2c674668(*(undefined4 *)(puVar1 + 0xc),param_4,param_3);
      return puVar1;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x25,DAT_2c5dc5d8,DAT_2c5dc5d4,DAT_2c5dc5dc);
  }
  return puVar1;
}

