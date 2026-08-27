/* FUN_140a4648 @ 0x140a4648 */

void FUN_140a4648(uint param_1,undefined1 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  
  puVar2 = DAT_140a4718;
  puVar1 = DAT_140a4700;
  if (0xfd < (param_1 - 1 & 0xff)) {
    FUN_1402a6e8(4,0xc4,DAT_140a4710,DAT_140a470c,DAT_140a4714,param_1,DAT_140a4710,0xc4);
    return;
  }
  if (*DAT_140a46fc != '\0') {
    FUN_140e5148(*DAT_140a4718,0xffffffff);
    for (iVar3 = FUN_140b4ff0(*puVar1); iVar4 = FUN_140b5008(*puVar1), iVar3 != iVar4;
        iVar3 = FUN_140b5020(iVar3)) {
      if ((**(byte **)(iVar3 + 4) == param_1) &&
         (pcVar5 = *(code **)(*(byte **)(iVar3 + 4) + 4), pcVar5 != (code *)0x0)) {
        (*pcVar5)(param_2,param_3,param_4);
      }
    }
    FUN_140e52d8(*puVar2);
    return;
  }
  FUN_1402a6e8(4,0xcc,DAT_140a4710,DAT_140a470c,DAT_140a4708,DAT_140a4704);
  return;
}

