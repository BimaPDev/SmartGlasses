/* FUN_1008adac @ 0x1008adac */

void FUN_1008adac(int param_1,int param_2,undefined2 param_3,undefined2 param_4,ushort *param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar8;
  int *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  uint local_40;
  int local_3c;
  byte local_2a;
  
  *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) | 8;
  *(undefined2 *)(param_1 + 0x28) = param_3;
  iVar2 = FUN_1012691c(param_1,param_2,param_5[4]);
  uVar1 = param_5[4];
  *(undefined2 *)(param_1 + 0x28) = param_4;
  iVar3 = FUN_1012691c(param_1,param_2,uVar1);
  *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & 0xf7;
  if (iVar2 != iVar3) {
    uVar1 = param_5[4];
    *(undefined2 *)(param_1 + 0x28) = param_3;
    iVar2 = FUN_1012691c(param_1,param_2,uVar1);
    *(undefined2 *)(param_1 + 0x28) = param_4;
    puVar4 = (undefined4 *)FUN_1008a678(param_1,param_2);
    FUN_100949b4(*puVar4,param_5[4],iVar2);
    if ((param_5[4] == 0xb) && ((iVar2 == 0x7fff || (iVar3 == 0x7fff)))) {
      iVar5 = FUN_10125786(param_1);
      iVar6 = FUN_10125790(param_1);
      if (iVar2 == 0x7fff) {
        iVar2 = iVar6 / 2 + 1;
        iVar7 = iVar5 / 2 + 1;
        if (iVar7 <= iVar2) {
          iVar2 = iVar7;
        }
      }
      if (iVar3 == 0x7fff) {
        iVar3 = iVar6 / 2 + 1;
        iVar5 = iVar5 / 2 + 1;
        if (iVar5 <= iVar3) {
          iVar3 = iVar5;
        }
      }
    }
    local_6c = (int *)FUN_10094064(DAT_1008af04);
    if (local_6c == (int *)0x0) {
      uVar8 = FUN_10094174(3,DAT_1008af14,0x164,DAT_1008af18,DAT_1008af10,DAT_1008af0c,DAT_1008af08)
      ;
      FUN_10119dc2(DAT_1008af20,DAT_1008af1c,DAT_1008af14,0x164,uVar8);
      FUN_10119dc2(DAT_1008af24);
      FUN_1011a1f0(DAT_1008af14,0x164,extraout_r2,extraout_r3);
    }
    else {
      uVar1 = param_5[4];
      local_6c[3] = iVar2;
      local_6c[4] = iVar3;
      *local_6c = param_1;
      *(ushort *)(local_6c + 1) = uVar1;
      local_6c[2] = param_2;
      FUN_10093284(&local_6c);
      local_44 = 0xff;
      local_68 = DAT_1008af28;
      local_40 = (uint)*param_5;
      local_64 = DAT_1008af2c;
      local_60 = DAT_1008af30;
      local_4c = 0;
      uStack_48 = 0;
      local_3c = -(uint)param_5[1];
      local_50 = *(undefined4 *)(param_5 + 6);
      local_2a = local_2a & 0xfe;
      local_54 = *(undefined4 *)(param_5 + 8);
      FUN_1009331c(&local_6c);
    }
  }
  return;
}

