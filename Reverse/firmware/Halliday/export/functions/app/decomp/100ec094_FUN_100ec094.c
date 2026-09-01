/* FUN_100ec094 @ 0x100ec094 */

undefined4 FUN_100ec094(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_38 [9];
  char local_2f;
  undefined4 local_28;
  ushort local_24;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    FUN_100a5b78(DAT_100ec1f8 | (DAT_100ec1f4 - DAT_100ec1f0) * 0x20 & 0xff00U,DAT_100ec200,
                 DAT_100ec1fc);
  }
  else {
    iVar1 = FUN_100eb0ec(param_1,*(undefined4 *)(*param_2 + 0xc));
    param_2[1] = iVar1;
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = param_1 + 0x18;
    FUN_1006bd24(iVar1,0,0);
    FUN_1011ea48(auStack_38,0);
    uVar2 = FUN_1006bc84(iVar1,auStack_38);
    if ((uVar2 < 0x10) || (local_2f != '\x02')) {
      FUN_100a5b78(DAT_100ec204 | (DAT_100ec1f4 - DAT_100ec1f0) * 0x20 & 0xff00U,DAT_100ec200,
                   DAT_100ec208);
    }
    else {
      FUN_1011ea48(&local_28,0,0x10);
      FUN_1006bd24(iVar1,*(int *)(*param_2 + 0xc) << 4,0);
      uVar2 = FUN_1006bc84(iVar1,&local_28,0x10);
      if (uVar2 < 0x10) {
        FUN_100a5b78(DAT_100ec20c | (DAT_100ec1f4 - DAT_100ec1f0) * 0x20 & 0xff00U,DAT_100ec200,
                     DAT_100ec210,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(*param_2 + 0xc));
      }
      else {
        FUN_1006bd24(iVar1,local_28,0);
        iVar3 = FUN_100ebffc(param_1,*(undefined4 *)(*param_2 + 0xc),local_24 + 1);
        uVar2 = (uint)local_24;
        param_2[1] = iVar3;
        if (iVar3 == 0) {
          iVar1 = DAT_100ec1f4 - DAT_100ec1f0;
          uVar6 = *(undefined4 *)(*param_2 + 0xc);
          uVar7 = *(undefined4 *)(param_1 + 0x38);
          uVar4 = DAT_100ec218;
          uVar5 = DAT_100ec214;
        }
        else {
          FUN_1011ea48(iVar3,0,uVar2 + 1);
          iVar1 = FUN_1006bc84(iVar1,param_2[1],local_24);
          uVar2 = (uint)local_24;
          if ((int)uVar2 <= iVar1) {
            return 0;
          }
          uVar6 = *(undefined4 *)(*param_2 + 0xc);
          iVar1 = DAT_100ec1f4 - DAT_100ec1f0;
          uVar7 = *(undefined4 *)(param_1 + 0x38);
          uVar4 = DAT_100ec220;
          uVar5 = DAT_100ec21c;
        }
        FUN_100a5b78(uVar4 | iVar1 * 0x20 & 0xff00U,DAT_100ec200,uVar5,uVar7,uVar6,local_28,uVar2);
      }
    }
  }
  return 0xffffffff;
}

