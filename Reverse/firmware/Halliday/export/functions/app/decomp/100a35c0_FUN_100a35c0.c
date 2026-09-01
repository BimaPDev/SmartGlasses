/* FUN_100a35c0 @ 0x100a35c0 */

undefined4 FUN_100a35c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_100a3618;
  piVar1 = DAT_100a3614;
  *DAT_100a3614 = DAT_100a3618;
  FUN_1011ea48(iVar2,0,0x198,param_4,param_4);
  FUN_100a3e34(param_1);
  FUN_100a38b4();
  FUN_100a40ac();
  thunk_FUN_101146e4(*piVar1 + 0x168,DAT_100a361c);
  FUN_100a5b78((DAT_100a3624 - DAT_100a3620) * 0x20 & 0xff00U | 0x9a0031,DAT_100a362c,DAT_100a3628);
  FUN_100a3598();
  return 1;
}

