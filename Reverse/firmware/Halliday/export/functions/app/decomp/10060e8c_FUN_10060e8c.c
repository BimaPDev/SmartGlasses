/* FUN_10060e8c @ 0x10060e8c */

undefined1
FUN_10060e8c(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,ushort param_5,
            char param_6)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort local_44 [2];
  ushort *local_40;
  undefined4 uStack_3c;
  char local_38;
  undefined4 local_34;
  uint uStack_30;
  undefined1 local_2c;
  
  uVar1 = DAT_10060f44;
  if (param_3 == 2) {
    local_44[0] = (ushort)((param_2 & 0xff) << 8) | (ushort)(param_2 >> 8) & 0xff;
    uVar4 = 2;
  }
  else {
    uVar4 = 1;
    local_44[0] = CONCAT11(local_44[0]._1_1_,(char)param_2);
  }
  cVar3 = '\v';
  uVar5 = (DAT_10060f30 - DAT_10060f34) * 0x20 & 0xff00U | DAT_10060f40;
  while( true ) {
    cVar3 = cVar3 + -1;
    if (cVar3 == '\0') {
      return 0;
    }
    local_40 = local_44;
    if (param_6 == '\0') {
      local_2c = 5;
      local_38 = param_6;
    }
    else {
      local_38 = '\0';
      local_2c = 7;
    }
    uStack_3c = uVar4;
    local_34 = param_4;
    uStack_30 = (uint)param_5;
    iVar2 = FUN_1011c062(*(undefined4 *)(DAT_10060f38 + 4),&local_40,2,param_1);
    if (iVar2 == 0) break;
    FUN_1011c098(4);
    FUN_100a5b78(uVar5,uVar1,DAT_10060f3c,iVar2);
  }
  return 1;
}

