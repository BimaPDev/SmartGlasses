/* FUN_100a0350 @ 0x100a0350 */

int FUN_100a0350(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = thunk_FUN_1009f30c(0x58,DAT_100a03ac,param_3,param_4,param_4);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 2) = 1;
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0x50) = param_1;
    FUN_1013c856(iVar1 + 0x3c);
    if (((code *)**(undefined4 **)(iVar1 + 0x50) != (code *)0x0) &&
       (iVar2 = (*(code *)**(undefined4 **)(iVar1 + 0x50))(iVar1,param_2), iVar2 != 0)) {
      FUN_100a5b78((DAT_100a03b4 - DAT_100a03b0) * 0x20 & 0xff00U | 0x390011,DAT_100a03bc,
                   DAT_100a03b8,iVar1);
      FUN_1012d1f4(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}

