/* FUN_10065844 @ 0x10065844 */

undefined4
FUN_10065844(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,undefined4 param_9,int param_10)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint local_94;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  ushort local_60 [26];
  
  if (param_2 + -0xd000000 < (int *)0x8000000) {
    FUN_1011e89a(param_2,param_3);
    FUN_1011e8f6();
  }
  if (param_4 + 0xcc000000U < 0x8000000) {
    iVar3 = param_10 * param_6 * 2;
    if (param_5 == 0) {
      iVar3 = param_10 * param_6 * 3;
    }
    FUN_1011e89a(param_4,iVar3);
    FUN_1011e8f6();
  }
  if (*param_2 == DAT_10065a90) {
    if (1 < *(ushort *)(param_2 + 3)) {
      uVar5 = (int)((uint)*(ushort *)((int)param_2 + 6) + (uint)*(ushort *)((int)param_2 + 10) + -1)
              / (int)(uint)*(ushort *)((int)param_2 + 10) & 0xff;
      uVar8 = (int)((uint)*(ushort *)(param_2 + 1) + (uint)*(ushort *)(param_2 + 2) + -1) /
              (int)(uint)*(ushort *)(param_2 + 2) & 0xff;
      if (param_5 == 0) {
        iVar3 = 3;
      }
      else {
        iVar3 = 2;
      }
      FUN_1013d03e(local_60,(int)param_2 + 0xe,uVar8 * uVar5 * 4,0x30);
      iVar13 = 0;
      sVar7 = 1;
      local_94 = 0;
      do {
        if (uVar5 == local_94) {
          return 0;
        }
        uVar12 = 0;
        puVar10 = local_60 + iVar13 * 2;
        while (uVar12 != uVar8) {
          uVar1 = puVar10[1];
          local_78 = (short)uVar12 * (short)param_2[2];
          uVar12 = uVar12 + 1;
          local_76 = *(short *)((int)param_2 + 10) * (short)local_94;
          local_72 = sVar7 * *(short *)((int)param_2 + 10) + -1;
          iVar4 = *(ushort *)((int)param_2 + 6) - 1;
          local_74 = (short)uVar12 * (short)param_2[2] + -1;
          if (iVar4 < local_72) {
            local_72 = (short)iVar4;
          }
          if ((int)(*(ushort *)(param_2 + 1) - 1) < (int)local_74) {
            local_74 = (short)(*(ushort *)(param_2 + 1) - 1);
          }
          local_6e = (short)param_8;
          local_6a = local_6e + -1 + (short)param_10;
          local_70 = (short)param_7;
          local_6c = (short)param_7 + (short)param_9 + -1;
          iVar4 = FUN_1013d990(&local_68,&local_70,&local_78);
          if (iVar4 != 0) {
            iVar4 = (int)local_66;
            iVar6 = (int)local_68;
            iVar9 = (local_62 + 1) - iVar4;
            iVar11 = (local_64 + 1) - iVar6;
            iVar4 = FUN_10065730(param_1,(uint)*puVar10 + (int)param_2,uVar1,
                                 (param_6 * (iVar4 - param_8) + (iVar6 - param_7)) * iVar3 + param_4
                                 ,param_5,param_6,iVar6 - local_78,iVar4 - local_76,iVar11,iVar9);
            if (iVar4 != 0) {
              FUN_100a5b78((DAT_10065a98 - DAT_10065a94) * 0x20 & 0xff00U | 0xc70011,DAT_10065aa0,
                           DAT_10065a9c,iVar4);
              return 0xfffffffd;
            }
            if (iVar9 * iVar11 < 0x100) {
              uVar2 = 1;
            }
            else {
              uVar2 = 0x32;
            }
            FUN_1011deec(*param_1,uVar2);
          }
          puVar10 = puVar10 + 2;
        }
        local_94 = local_94 + 1;
        sVar7 = sVar7 + 1;
        iVar13 = iVar13 + uVar8;
      } while( true );
    }
    param_3 = param_3 + -0x14;
    param_2 = param_2 + 5;
  }
  uVar2 = FUN_10065730(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10);
  return uVar2;
}

