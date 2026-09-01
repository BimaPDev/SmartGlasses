/* FUN_100a2fe4 @ 0x100a2fe4 */

undefined4 FUN_100a2fe4(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((int *)*DAT_100a3020 == (int *)0x0) || (iVar2 = *(int *)*DAT_100a3020, iVar2 == 0)) {
    FUN_100a5b78((DAT_100a3028 - DAT_100a3024) * 0x20 & 0xff00U | 0x860011,DAT_100a3030,DAT_100a302c
                );
    uVar1 = 0xffffffed;
  }
  else {
    FUN_1012d994(iVar2,param_1,param_2,iVar2,param_4);
    uVar1 = 0;
  }
  return uVar1;
}

