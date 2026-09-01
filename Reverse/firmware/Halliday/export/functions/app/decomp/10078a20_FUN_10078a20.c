/* FUN_10078a20 @ 0x10078a20 */

undefined4 FUN_10078a20(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined2 local_20 [10];
  
  pcVar4 = *(char **)(param_1 + 0x10);
  FUN_1011ea48(local_20,0,0x10);
  local_20[0] = 6;
  if (*pcVar4 == '\x02') {
    FUN_10055be0(0x20);
    FUN_10055be0(0x21);
    *DAT_10078aa4 = *DAT_10078aa4 & 0xfffffff9;
    iVar1 = FUN_100793c8(param_1,local_20);
    uVar2 = (DAT_10078aa8 - DAT_10078aac) * 0x20 & 0xff00;
    if (iVar1 == 0) {
      *pcVar4 = '\x01';
      FUN_100a5b78(uVar2 | 0x980011,DAT_10078ab4,DAT_10078ab8);
      uVar3 = 0;
    }
    else {
      FUN_100a5b78(uVar2 | 0x930011,DAT_10078ab4,DAT_10078ab0);
      uVar3 = 0xfffffff2;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

