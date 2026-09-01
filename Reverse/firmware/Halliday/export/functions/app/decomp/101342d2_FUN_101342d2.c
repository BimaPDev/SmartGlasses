/* FUN_101342d2 @ 0x101342d2 */

undefined4 FUN_101342d2(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  int extraout_r1;
  undefined8 uVar6;
  
  if (*param_1 == 0) {
    uVar5 = 0xffffff80;
  }
  else {
    if (*(char *)(*param_1 + 2) == '\x02') {
      if (*param_1 == 0) {
        uVar5 = 0xffffff80;
      }
      else if ((char)param_1[0x11] == '\x04') {
        uVar5 = 0xffffff88;
      }
      else {
        iVar2 = FUN_1013401c(DAT_100e2108,0,0xffffffff,0xffffffff);
        puVar3 = (undefined1 *)FUN_100c1fe4(iVar2 + 8,4);
        *puVar3 = 6;
        uVar1 = FUN_100e13b8(puVar3,puVar3);
        *(undefined1 *)(extraout_r1 + 1) = uVar1;
        *(undefined1 *)(extraout_r1 + 2) = 4;
        *(undefined1 *)(extraout_r1 + 3) = 0;
        puVar4 = (undefined2 *)FUN_100c1fe4(iVar2 + 8,4);
        *puVar4 = (short)param_1[0x15];
        puVar4[1] = (short)param_1[0x14];
        FUN_10138156(param_1,iVar2,1000,0);
        FUN_10133f98(param_1,4);
        uVar5 = 0;
      }
      return uVar5;
    }
    uVar5 = FUN_100cb508();
    *(char *)(param_1 + 0x12) = (char)uVar5;
    iVar2 = FUN_100cb5a8(6,uVar5,4);
    if (iVar2 == 0) {
      uVar5 = 0xfffffff4;
    }
    else {
      uVar6 = FUN_100c1fe4(iVar2 + 8,4);
      *(undefined2 *)uVar6 = (short)param_1[0x14];
      ((undefined2 *)uVar6)[1] = (short)param_1[0x17];
      FUN_1013cbaa(param_1 + 4,(int)((ulonglong)uVar6 >> 0x20),2000,0,param_4);
      FUN_1013411a(*param_1,iVar2);
      uVar5 = 0;
      *(undefined1 *)(param_1 + 0x11) = 4;
    }
  }
  return uVar5;
}

