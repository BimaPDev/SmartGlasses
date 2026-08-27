/* FUN_14001e54 @ 0x14001e54 */

void FUN_14001e54(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined1 local_1d;
  int local_1c;
  
  iVar2 = iRam14001f1c;
  iVar1 = iRam14001f18;
  local_1c = *piRam14001f14;
  if (param_2 == 0x20) {
    local_1d = 0x40;
  }
  else {
    if (param_2 != 0) goto LAB_14001ee2;
    local_1d = 0x10;
  }
  pcVar3 = *(char **)(iRam14001f1c + (uint)*(byte *)(iRam14001f18 + param_1) * 4);
  if ((0x1000000 < *(uint *)(pcVar3 + 0xc)) && (*pcVar3 == -0x38)) {
    FUN_1400185c(param_1,0);
  }
  FUN_140017b4(param_1);
  FUN_1400156c(param_1,&local_1d,1);
  FUN_1400168c(param_1,0x77,0);
  FUN_14001db8(param_1,0);
  pcVar3 = *(char **)(iVar2 + (uint)*(byte *)(iVar1 + param_1) * 4);
  if ((0x1000000 < *(uint *)(pcVar3 + 0xc)) && (*pcVar3 == -0x38)) {
    FUN_1400185c(param_1,1);
  }
  if (param_2 == 0) {
    FUN_14001938(param_1);
  }
  else {
    FUN_140018f8(param_1,param_2);
    FUN_14001928(param_1);
  }
  FUN_14001948(param_1);
LAB_14001ee2:
  if (*piRam14001f14 != local_1c) {
    FUN_14003370();
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return;
}

