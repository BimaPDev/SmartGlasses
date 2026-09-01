/* FUN_1000a7cc @ 0x1000a7cc */

void FUN_1000a7cc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  
  puVar1 = DAT_1000a858;
  iVar3 = *DAT_1000a850;
  FUN_10119dc2(DAT_1000a854,param_2,param_3,0,param_1,param_1,param_3);
  FUN_10119dc2(DAT_1000a85c,param_2);
  cVar2 = FUN_100bed38();
  puVar1[2] = (char)((uint)param_2 >> 8);
  puVar1[3] = (char)((uint)param_2 >> 0x10);
  puVar1[6] = 1;
  cVar2 = cVar2 + -3;
  puVar1[7] = cVar2;
  puVar1[10] = cVar2;
  puVar1[0xd] = cVar2;
  puVar1[9] = 2;
  puVar1[0xf] = 4;
  puVar1[1] = (char)param_2;
  puVar1[0xc] = 3;
  puVar1[0x10] = 5;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  *puVar1 = 0;
  puVar1[4] = (char)((uint)param_2 >> 0x18);
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  FUN_1000a6b0(0,puVar1,0x11,param_1);
  *(undefined2 *)(DAT_1000a860 + 10) = 0;
  if (*DAT_1000a850 != iVar3) {
    FUN_1013cdc0();
  }
  return;
}

