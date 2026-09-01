/* FUN_10021e38 @ 0x10021e38 */

void FUN_10021e38(byte *param_1,byte *param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  
  iVar4 = *(int *)PTR_DAT_1002203c;
  pbVar1 = (byte *)FUN_100ed61c(2,0x55a,PTR_s_packet_1AppSetting_10022040,0,param_1,iVar4,param_3);
  pbVar5 = (byte *)(((int)PTR_DAT_10022044 - (int)PTR_DAT_10022048) * 0x20 & 0xff00);
  FUN_100a5b78((uint)pbVar5 | 0xd60031,PTR_s_packet_1AppSetting_10022050,
               PTR_s_packet_1AppSetting_filename____s_1002204c,param_2);
  if (((param_1 != (byte *)0x0) && (pbVar1 != (byte *)0x0)) && (param_2 != (byte *)0x0))
  goto LAB_10021eac;
  FUN_100a5b78((uint)pbVar5 | 0xd90031,PTR_s_packet_1AppSetting_10022050,
               PTR_s_ERROR__maybe_a_NULL_point__data__10022054);
  if (pbVar1 != (byte *)0x0) {
    do {
      FUN_100ed77c(2,pbVar1);
      pbVar2 = (byte *)0x0;
LAB_10021e9c:
      while( true ) {
        if (*(int *)PTR_DAT_1002203c == iVar4) {
          return;
        }
        FUN_1013cdc0(pbVar2);
LAB_10021eac:
        iVar3 = FUN_10021bd0(param_2,pbVar1,0x55a);
        if (iVar3 < 1) break;
        pbVar2 = param_1 + 1;
        *param_1 = *pbVar1;
        FUN_1011ea40(pbVar2,pbVar1 + 1);
        uVar8 = (uint)*pbVar1;
        pbVar2[uVar8] = pbVar1[0x41];
        uVar6 = 0;
        FUN_10119dc2(PTR_s_packet_1AppSetting_app__s_switch_1002205c,pbVar1 + 1);
        pbVar5 = pbVar2 + uVar8 + 2;
        pbVar2[uVar8 + 1] = pbVar1[0x42];
        iVar3 = uVar8 + 3;
        pbVar2 = pbVar1 + 0x44;
        while ((pbVar7 = pbVar5 + 1, (uVar6 & 0xff) < (uint)pbVar1[0x42] &&
               (uVar6 = uVar6 + 1, uVar6 != 6))) {
          *pbVar5 = pbVar2[-1];
          FUN_1011ea40(pbVar7,pbVar2,pbVar2[-1]);
          pbVar9 = pbVar2 + -1;
          pbVar2 = pbVar2 + 0x41;
          pbVar5 = pbVar7 + *pbVar9;
          iVar3 = iVar3 + *pbVar9 + 1;
        }
        uVar6 = 0;
        iVar3 = iVar3 + 1;
        *pbVar5 = pbVar1[0x188];
        pbVar5 = pbVar1 + 0x18a;
        while ((pbVar9 = pbVar7 + 1, (uVar6 & 0xff) < (uint)pbVar1[0x188] &&
               (uVar6 = uVar6 + 1, uVar6 != 6))) {
          *pbVar7 = pbVar5[-1];
          FUN_1011ea40(pbVar9,pbVar5,pbVar5[-1]);
          pbVar2 = pbVar5 + -1;
          pbVar5 = pbVar5 + 0x41;
          pbVar7 = pbVar9 + *pbVar2;
          iVar3 = iVar3 + *pbVar2 + 1;
        }
        uVar6 = 0;
        iVar3 = iVar3 + 1;
        *pbVar7 = pbVar1[0x2ce];
        pbVar2 = pbVar1 + 0x2d0;
        while ((pbVar5 = pbVar9 + 1, (uVar6 & 0xff) < (uint)pbVar1[0x2ce] &&
               (uVar6 = uVar6 + 1, uVar6 != 6))) {
          *pbVar9 = pbVar2[-1];
          FUN_1011ea40(pbVar5,pbVar2,pbVar2[-1]);
          pbVar7 = pbVar2 + -1;
          pbVar2 = pbVar2 + 0x41;
          pbVar9 = pbVar5 + *pbVar7;
          iVar3 = iVar3 + *pbVar7 + 1;
        }
        pbVar2 = (byte *)(iVar3 + 1);
        *pbVar9 = pbVar1[0x414];
        uVar6 = 0;
        param_2 = pbVar1 + 0x416;
        while( true ) {
          if (((uint)pbVar1[0x414] <= (uVar6 & 0xff)) || (uVar6 = uVar6 + 1, uVar6 == 6)) break;
          *pbVar5 = param_2[-1];
          FUN_1011ea40(pbVar5 + 1,param_2,param_2[-1]);
          pbVar7 = param_2 + -1;
          param_2 = param_2 + 0x41;
          pbVar5 = pbVar5 + 1 + *pbVar7;
          pbVar2 = pbVar2 + *pbVar7 + 1;
        }
        FUN_100ed77c(2,pbVar1);
        param_1 = pbVar2;
      }
      FUN_100a5b78((uint)pbVar5 | 0xe40031,PTR_s_packet_1AppSetting_10022050,
                   PTR_s_packet_1AppSetting_Read_file_fai_10022058);
    } while( true );
  }
  pbVar2 = (byte *)0x0;
  goto LAB_10021e9c;
}

