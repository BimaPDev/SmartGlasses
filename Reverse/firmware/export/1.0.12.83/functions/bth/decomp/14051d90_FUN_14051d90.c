/* FUN_14051d90 @ 0x14051d90 */

void FUN_14051d90(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  uint local_30;
  undefined1 local_28;
  int local_1c;
  
  local_1c = *DAT_14051e90;
  puVar1 = (undefined4 *)FUN_1404a1b4();
  FUN_1402a6e8(4,0xa94,DAT_14051e9c,DAT_14051e98,DAT_14051e94,param_1,
               *(undefined1 *)((int)puVar1 + 0xd9));
  iVar2 = FUN_1404a114(param_1);
  if (iVar2 != 0) {
    uVar4 = (uint)*(byte *)((int)puVar1 + 0xd9);
    if (uVar4 == 1) {
      iVar2 = FUN_1409e5b8(1,*(undefined1 *)((int)puVar1 + 10));
      if (iVar2 == 4) {
        local_38 = *puVar1;
        local_34 = *(undefined2 *)(puVar1 + 1);
        local_32 = *(undefined1 *)((int)puVar1 + 10);
        local_28 = 4;
        local_30 = uVar4;
        FUN_1409e1ec(&local_38);
        *(undefined1 *)((int)puVar1 + 0xfe) = 0;
        FUN_14051a80(puVar1,1);
      }
      if (*(char *)((int)puVar1 + 0xda) != '\0') {
        uVar3 = thunk_FUN_140e5848();
        puVar1[0x34] = uVar3;
        FUN_14051b04(puVar1);
      }
      if (*(char *)(DAT_14051ea0 + 0x185) != '\0') {
        FUN_14051378(param_1);
      }
      if (*(char *)((int)puVar1 + 0xd9) == '\0') goto LAB_14051de4;
    }
    else if (uVar4 == 0) {
LAB_14051de4:
      iVar2 = FUN_1404a1b4(param_1);
      if ((*(char *)(iVar2 + 0xde) != '\0') && (*(int *)(iVar2 + 0xd8) == 0)) {
        uVar5 = FUN_1409e5b8(1,*(undefined1 *)((int)puVar1 + 10));
        if ((int)uVar5 == 3) {
          if (*DAT_14051e90 == local_1c) {
            FUN_14051528(puVar1,(int)((ulonglong)uVar5 >> 0x20),0,0);
            return;
          }
          goto LAB_14051e8c;
        }
      }
    }
  }
  if (*DAT_14051e90 == local_1c) {
    return;
  }
LAB_14051e8c:
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

