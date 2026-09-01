/* FUN_10045340 @ 0x10045340 */

void FUN_10045340(int param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_114 [256];
  int local_14;
  
  local_14 = *DAT_100453ac;
  if ((param_1 == 0) || (param_2 < 7)) {
    uVar3 = 0xffffffea;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 6);
    FUN_1011ea48(auStack_114,0,0x100,0);
    FUN_1013d03e(auStack_114,param_1 + 7,uVar1,0x100);
    thunk_FUN_1009efe8(DAT_100453b0,auStack_114,0x100);
    FUN_1012d1ae(DAT_100453b0);
    iVar2 = (**(code **)(DAT_100453b4 + 8))();
    if (iVar2 == 0x5a) {
      FUN_10045314();
    }
    uVar3 = 0;
  }
  if (*DAT_100453ac != local_14) {
    FUN_1013cdc0(uVar3);
  }
  return;
}

