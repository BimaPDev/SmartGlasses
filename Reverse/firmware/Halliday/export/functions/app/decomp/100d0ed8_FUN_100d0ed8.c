/* FUN_100d0ed8 @ 0x100d0ed8 */

undefined4 FUN_100d0ed8(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_38 [16];
  int local_28 [5];
  
  FUN_1011ea48(local_28,0,0x10);
  switch((char)param_1[0x36]) {
  case '\0':
  case '\x03':
    break;
  case '\x01':
  case '\x02':
    local_28[0] = param_1[0x6a];
    break;
  default:
    FUN_100a5b78(DAT_100d0fe4 | (DAT_100d0fd4 - DAT_100d0fd0) * 0x20 & 0xff00U,DAT_100d0fd8,
                 DAT_100d0fe8);
    return 8;
  case '\x05':
    piVar5 = (int *)param_1[0x6d];
    if (piVar5 != (int *)0x0) {
      piVar6 = local_28;
      piVar7 = piVar5 + 4;
      do {
        iVar2 = *piVar5;
        iVar4 = piVar5[1];
        piVar5 = piVar5 + 2;
        *piVar6 = iVar2;
        piVar6[1] = iVar4;
        piVar6 = piVar6 + 2;
      } while (piVar5 != piVar7);
    }
  }
  iVar2 = FUN_100d0c74((int)param_1 + 0x167,(int)param_1 + 0xf7,(int)param_1 + 0x107,*param_1 + 0x97
                       ,*param_1 + 0x9e,(int)param_1 + 0x197,(int)param_1 + 0x117);
  if (iVar2 == 0) {
    iVar2 = FUN_1013561a((int)param_1 + 0x197,(int)param_1 + 0xf7,(int)param_1 + 0x107,local_28,
                         (int)param_1 + 0xda,*param_1 + 0x97,*param_1 + 0x9e,auStack_38);
    if (iVar2 == 0) {
      FUN_10135440(param_1 + 0x34,0xd);
      uVar3 = FUN_101358ac(param_1,auStack_38);
      return uVar3;
    }
    iVar2 = DAT_100d0fd4 - DAT_100d0fd0;
    uVar1 = DAT_100d0ff0;
    uVar3 = DAT_100d0fec;
  }
  else {
    iVar2 = DAT_100d0fd4 - DAT_100d0fd0;
    uVar1 = DAT_100d0fe0;
    uVar3 = DAT_100d0fdc;
  }
  FUN_100a5b78(uVar1 | iVar2 * 0x20 & 0xff00U,DAT_100d0fd8,uVar3);
  return 8;
}

