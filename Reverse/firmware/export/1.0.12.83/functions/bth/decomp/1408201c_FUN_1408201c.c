/* FUN_1408201c @ 0x1408201c */

void FUN_1408201c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  
  if ((*(byte *)(param_3 + 1) & 0xef) == 0xe0) {
    *(byte *)(param_1 + 0x3b) = *(byte *)(param_3 + 7) & 7;
  }
  else {
    *(undefined1 *)(param_1 + 0x39) = 0;
    *(undefined1 *)(param_1 + 0x3a) = 0;
  }
  *(undefined1 *)(param_1 + 0x37) = *(undefined1 *)(param_3 + 2);
  uVar1 = DAT_1408205c;
  uVar2 = *(ushort *)(param_3 + 4);
  if ((param_2 != 0) && (*(ushort *)(param_1 + 0x1c) <= uVar2)) {
    uVar2 = *(ushort *)(param_1 + 0x1c);
  }
  *(ushort *)(param_1 + 0x1c) = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x41,uVar1);
}

