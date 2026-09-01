/* FUN_1000b4d8 @ 0x1000b4d8 */

void FUN_1000b4d8(undefined4 param_1,byte *param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  undefined1 auStack_3c [40];
  int local_14;
  
  pbVar5 = DAT_1000b698;
  local_14 = *DAT_1000b694;
  bVar4 = *(byte *)(param_3 + 4);
  pbVar6 = (byte *)(uint)bVar4;
  if (param_2 != (byte *)0x0) {
    if (pbVar6 == (byte *)0x2) {
      pbVar6 = *(byte **)(param_2 + 0xc);
      FUN_100c4d50(*(undefined4 *)pbVar6,auStack_3c,0x25,0);
      FUN_10119dc2(DAT_1000b6a4);
      FUN_10119dc2(DAT_1000b6dc,auStack_3c,*(undefined2 *)(param_2 + 0x10),
                   *(undefined2 *)(pbVar6 + 4),*(undefined2 *)(pbVar6 + 6));
    }
    else if (pbVar6 < (byte *)0x3) {
      pbVar6 = *(byte **)(param_2 + 0xc);
      FUN_100c4d50(*(undefined4 *)pbVar6,auStack_3c,0x25,0);
      FUN_10119dc2(DAT_1000b6a4);
      FUN_10119dc2(DAT_1000b6ac,auStack_3c,*(undefined2 *)(param_2 + 0x10),
                   *(undefined2 *)(pbVar6 + 4));
      uVar2 = *(undefined2 *)(pbVar6 + 4);
      uVar1 = *(undefined2 *)(param_2 + 0x10);
      if (**(char **)pbVar6 == '\0') {
        bVar4 = 2;
      }
      else {
        bVar4 = 1;
      }
      *DAT_1000b698 = bVar4;
      FUN_1000b218(uVar1,uVar2);
    }
    else if (pbVar6 == (byte *)0x3) {
      param_3 = *(undefined4 **)(param_2 + 0xc);
      FUN_100c4d50(*param_3,auStack_3c,0x25,0);
      FUN_10119dc2(DAT_1000b6a4);
      FUN_10119dc2(DAT_1000b6b0,auStack_3c,*(undefined2 *)(param_2 + 0x10));
      uVar7 = (uint)*(byte *)((int)param_3 + 6);
      FUN_10119dc2(DAT_1000b6a4);
      FUN_10119dc2(DAT_1000b6b4);
      if ((int)(uVar7 << 0x1f) < 0) {
        FUN_10119dc2(DAT_1000b6a4);
        FUN_10119dc2(DAT_1000b6b8);
      }
      if ((int)(uVar7 << 0x1e) < 0) {
        FUN_10119dc2(DAT_1000b6a4);
        FUN_10119dc2(DAT_1000b6bc);
      }
      if ((int)(uVar7 << 0x1c) < 0) {
        FUN_10119dc2(DAT_1000b6a4);
        FUN_10119dc2(DAT_1000b6c0);
      }
      if ((int)(uVar7 << 0x1d) < 0) {
        FUN_10119dc2(DAT_1000b6a4);
        FUN_10119dc2(DAT_1000b6c4);
      }
      if ((int)(uVar7 << 0x1b) < 0) {
        FUN_10119dc2(DAT_1000b6a4);
        FUN_10119dc2(DAT_1000b6c8);
      }
      if ((int)(uVar7 << 0x1a) < 0) {
        FUN_10119dc2(DAT_1000b6a4);
        FUN_10119dc2(DAT_1000b6cc);
      }
      if ((int)(uVar7 << 0x19) < 0) {
        FUN_10119dc2(DAT_1000b6a4);
        FUN_10119dc2(DAT_1000b6d0);
      }
      if ((int)(uVar7 << 0x18) < 0) {
        FUN_10119dc2(DAT_1000b6a4);
        FUN_10119dc2(DAT_1000b6d4);
      }
      pbVar6 = (byte *)0x1;
      FUN_10119dc2(DAT_1000b6a4);
      FUN_10119dc2(DAT_1000b6d8);
      uVar2 = *(undefined2 *)(param_2 + 0x10);
      *DAT_1000b69c = 1;
      FUN_1000b34c(param_3,uVar2);
    }
    else {
      FUN_100c4d50(*(undefined4 *)param_2,auStack_3c,0x25,0);
      FUN_10119dc2(DAT_1000b6a4);
      FUN_10119dc2(DAT_1000b6a8,auStack_3c,*(undefined2 *)(param_2 + 0x10));
      FUN_1000b484(param_2);
    }
    uVar3 = 1;
    goto LAB_1000b508;
  }
  if (pbVar6 != (byte *)0x0) goto LAB_1000b518;
  FUN_1000ab14(3,*DAT_1000b698);
  *pbVar5 = bVar4;
LAB_1000b4fc:
  FUN_1011ea48(param_3,0,0x14);
  uVar3 = 0;
  param_2 = pbVar5;
LAB_1000b508:
  if (*DAT_1000b694 == local_14) {
    return;
  }
  FUN_1013cdc0(uVar3);
LAB_1000b518:
  pbVar5 = param_2;
  if (pbVar6 != (byte *)0x3) goto LAB_1000b52e;
  uVar3 = 4;
  bVar4 = *DAT_1000b69c;
  pbVar6 = DAT_1000b69c;
  goto LAB_1000b526;
LAB_1000b52e:
  if (pbVar6 == &Reset) {
    uVar3 = 5;
    bVar4 = *DAT_1000b6a0;
    pbVar6 = DAT_1000b6a0;
LAB_1000b526:
    FUN_1000ab14(uVar3,bVar4 ^ 1);
    *pbVar6 = (byte)pbVar5;
  }
  goto LAB_1000b4fc;
}

