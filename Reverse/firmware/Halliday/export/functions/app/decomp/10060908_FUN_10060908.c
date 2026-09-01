/* FUN_10060908 @ 0x10060908 */

undefined1 FUN_10060908(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined4 *local_98;
  uint uStack_94;
  char local_90;
  undefined4 local_8c;
  undefined1 auStack_88 [100];
  
  local_8c = 0;
  FUN_1011ea48(auStack_88,0,0x60);
  if (param_2 == 2) {
    local_8c = CONCAT22(local_8c._2_2_,
                        (ushort)((param_1 & 0xff) << 8) | (ushort)(param_1 >> 8) & 0xff);
    FUN_1013d03e((int)&local_8c + 2,param_3,param_4,0x62);
    bVar5 = (char)param_4 + 2;
  }
  else {
    local_8c = CONCAT31(local_8c._1_3_,(char)param_1);
    FUN_1013d03e((int)&local_8c + 1,param_3,param_4,99);
    bVar5 = (char)param_4 + 1;
  }
  uVar3 = DAT_100609e4;
  uVar2 = DAT_100609e0;
  iVar1 = DAT_100609dc;
  cVar6 = '\v';
  uVar7 = (DAT_100609d0 - DAT_100609d4) * 0x20 & 0xff00U | DAT_100609d8;
  while( true ) {
    cVar6 = cVar6 + -1;
    if (cVar6 == '\0') {
      return 0;
    }
    if (param_5 == '\0') {
      local_90 = param_5;
      local_98 = &local_8c;
      uStack_94 = (uint)bVar5;
      iVar4 = FUN_1011c062(*(undefined4 *)(iVar1 + 4),&local_98,1,0x44);
    }
    else {
      iVar4 = FUN_1011c09e(*(undefined4 *)(iVar1 + 4),&local_8c,(uint)bVar5,0x44);
    }
    if (iVar4 == 0) break;
    FUN_1011c098(4);
    FUN_100a5b78(uVar7,uVar3,uVar2,iVar4);
  }
  return 1;
}

