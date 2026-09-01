/* FUN_10060880 @ 0x10060880 */

undefined4 FUN_10060880(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  undefined8 uVar8;
  int local_24;
  undefined4 uStack_20;
  
  local_24 = param_2;
  uStack_20 = param_3;
  uVar8 = FUN_101153fc(0x14,0,param_3,param_4,param_1);
  uVar3 = DAT_10060904;
  uVar2 = DAT_10060900;
  uVar1 = DAT_100608f8;
  sVar6 = 0;
  while( true ) {
    iVar7 = *(int *)(param_1 + 8);
    iVar5 = **(int **)(iVar7 + 4);
    iVar4 = iVar5 << 0xd;
    if (-1 < iVar4) {
      FUN_10119dc2(uVar3,uVar2,uVar1,0x489,uVar8);
      FUN_10119dc2(DAT_100608fc);
      FUN_1011a1f0(uVar1,0x489,iVar4,iVar5);
    }
    iVar4 = (**(code **)(*(int *)(iVar7 + 8) + 4))(iVar7,&local_24);
    if ((iVar4 == 0) && (-1 < local_24 << 0xd)) break;
    sVar6 = sVar6 + 1;
    uVar8 = FUN_101153fc(1,0);
    if (sVar6 == 1000) {
      return 0;
    }
  }
  return 1;
}

