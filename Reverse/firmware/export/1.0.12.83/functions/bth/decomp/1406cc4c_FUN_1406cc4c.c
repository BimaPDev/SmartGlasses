/* FUN_1406cc4c @ 0x1406cc4c */

undefined4
FUN_1406cc4c(uint param_1,undefined4 param_2,undefined2 param_3,uint param_4,undefined2 param_5,
            ushort param_6,int param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  
  uVar4 = param_4;
  iVar1 = FUN_14066108(param_2);
  cVar3 = '\0';
  if ((param_4 & 6) != 0) {
    if (1 < (param_4 & 7) - 2) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_1406cd50,0xb6,DAT_1406cd4c,uVar4);
    }
    cVar3 = '\x01';
  }
  if (param_7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406cd50,0xb9,DAT_1406cd4c,uVar4);
  }
  if (param_6 < 0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406cd50,0xba,DAT_1406cd4c,uVar4);
  }
  if ((param_1 < 2) && (iVar2 = *(int *)(DAT_1406cd48 + (param_1 + 0x22) * 4), iVar2 != 0)) {
    if (*(ushort *)(iVar2 + 0x50) == 0) {
      return 0x58;
    }
    if ((iVar1 != 0) && (*(char *)(iVar1 + 9) == cVar3)) {
      if (param_4 == 0x39) {
        if ((-1 < (int)((uint)*(byte *)(iVar2 + 0x54) << 0x1e)) ||
           ((*(ushort *)(iVar2 + 0x50) & 0xfffe) != 0)) {
          return 0x42;
        }
        iVar1 = FUN_1405c314(param_1);
        if ((iVar1 == 0) || (iVar1 = FUN_1405c364(param_1), iVar1 == 0)) {
          return 0x53;
        }
      }
      iVar1 = FUN_14073fdc(param_6,2);
      if (iVar1 != 0) {
        *(char *)(iVar1 + 0x11) = (char)param_4;
        *(int *)(iVar1 + 4) = param_7;
        *(undefined2 *)(iVar1 + 0x14) = param_5;
        *(undefined2 *)(iVar1 + 0x16) = param_3;
        *(char *)(iVar1 + 0x13) = (char)param_2;
        *(undefined1 *)(iVar1 + 0x12) = 0x20;
        *(undefined4 *)(iVar1 + 0x1c) = 0;
        *param_8 = iVar1;
        return 0;
      }
      return 0x4b;
    }
  }
  return 0x43;
}

