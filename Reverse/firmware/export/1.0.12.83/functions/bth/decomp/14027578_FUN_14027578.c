/* FUN_14027578 @ 0x14027578 */

void FUN_14027578(undefined4 *param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = DAT_140275bc;
  if (param_2 == 0) {
    bVar1 = *(byte *)(param_1 + 3);
    *DAT_140275bc = *param_1;
    puVar2[0x22] = (uint)bVar1;
    return;
  }
  uVar3 = param_1[1];
  bVar1 = *(byte *)((int)param_1 + 0xd);
  if (*(char *)((int)param_1 + 0xf) != '\0') {
    DAT_140275bc[10] = (uint)*(byte *)((int)param_1 + 0xe);
    puVar2[0xb] = *(byte *)((int)param_1 + 0xf) | 0x40000;
    puVar2 = DAT_140275bc;
    *DAT_140275bc = uVar3;
    puVar2[0x22] = (uint)bVar1;
    return;
  }
  DAT_140275bc[0xb] = 0;
  puVar2 = DAT_140275bc;
  *DAT_140275bc = uVar3;
  puVar2[0x22] = (uint)bVar1;
  return;
}

