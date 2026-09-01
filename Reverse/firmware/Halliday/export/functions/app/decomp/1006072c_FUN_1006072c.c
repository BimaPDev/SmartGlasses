/* FUN_1006072c @ 0x1006072c */

void FUN_1006072c(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  undefined4 uStack_14;
  
  puVar1 = DAT_10060788;
  if (*(char *)(DAT_10060784 + 0x2c) != '\0') {
    iVar2 = *(int *)(DAT_10060784 + 4);
    *DAT_10060788 = 0x10;
    FUN_1011ea48(local_2c,0,0x12);
    local_28 = DAT_1006078c;
    local_24 = 0xc;
    local_20 = 7;
    local_1a = 0x44;
    local_30 = 1;
    local_1c = 2;
    local_2c[0] = 0;
    local_18 = DAT_10060790;
    uStack_14 = 0;
    local_34 = puVar1;
    (**(code **)(*(int *)(iVar2 + 8) + 8))(iVar2,&local_34);
  }
  return;
}

