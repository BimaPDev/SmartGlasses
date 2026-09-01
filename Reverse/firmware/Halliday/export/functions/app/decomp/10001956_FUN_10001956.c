/* FUN_10001956 @ 0x10001956 */

void FUN_10001956(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar2 = param_1;
  if (param_1 < 3) goto LAB_1000196a;
  uVar4 = 0x5c;
  uVar5 = DAT_100019ac;
  while( true ) {
    while( true ) {
      uVar2 = FUN_100031f8(DAT_100019b4,uVar4,DAT_100019b0,uVar5,param_4);
LAB_1000196a:
      iVar6 = uVar2 * 0x34 + DAT_100019b8;
      if (*(int *)(iVar6 + 0x28) != 0) break;
      uVar4 = 0x5d;
      uVar5 = DAT_100019bc;
    }
    puVar3 = (undefined1 *)FUN_100018ac();
    if (puVar3 != (undefined1 *)0x0) break;
    uVar4 = 0x65;
    uVar5 = DAT_100019c0;
  }
  *puVar3 = (char)param_1;
  sVar1 = *(short *)(iVar6 + 2);
  *(short *)(iVar6 + 2) = sVar1 + 1;
  *(short *)(puVar3 + 2) = sVar1;
  *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
  return;
}

