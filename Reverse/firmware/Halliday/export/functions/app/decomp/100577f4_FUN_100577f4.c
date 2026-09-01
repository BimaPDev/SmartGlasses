/* FUN_100577f4 @ 0x100577f4 */

void FUN_100577f4(int param_1,uint param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  undefined1 local_29 [8];
  char local_21 [5];
  
  local_29[0] = (undefined1)param_2;
  if (*(byte *)(DAT_100578c0 + (uint)*DAT_100578bc) == param_2) {
    uVar6 = *DAT_100578bc + 1;
    bVar5 = (byte)uVar6;
    if ((uVar6 & 0xff) == 5) {
      *DAT_100578bc = 0;
      FUN_1005d20c();
      uVar4 = DAT_100578d8;
      iVar3 = DAT_100578d4;
      uVar2 = DAT_100578c8;
      pcVar1 = DAT_100578c4;
      *DAT_100578c4 = '\x01';
      do {
        FUN_10119dc2(uVar2);
        FUN_1005772c();
        if ((code *)**(undefined4 **)(param_1 + 8) != (code *)0x0) {
          (*(code *)**(undefined4 **)(param_1 + 8))(param_1,local_21);
        }
        if (local_21[0] == 'q') {
          FUN_10119dc2(DAT_100578cc);
          break;
        }
        if (local_21[0] == 't') {
          iVar7 = 0;
LAB_10057892:
          iVar7 = iVar3 + iVar7 * 0x10;
          FUN_10119dc2(uVar4,*(undefined4 *)(iVar7 + 0xc));
          (**(code **)(iVar7 + 4))(local_21[0]);
        }
        else {
          if (local_21[0] == 'j') {
            iVar7 = 1;
            goto LAB_10057892;
          }
          if (local_21[0] == 's') {
            iVar7 = 2;
            goto LAB_10057892;
          }
          FUN_1005772c();
        }
      } while (*pcVar1 != '\0');
      FUN_1005d20c(1);
      pcVar8 = *(code **)(*(int *)(param_1 + 8) + 0x18);
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(param_1,local_29,1);
      }
      goto LAB_1005787c;
    }
  }
  else {
    bVar5 = 0;
  }
  *DAT_100578bc = bVar5;
LAB_1005787c:
  if ((code *)*DAT_100578d0 != (code *)0x0) {
    (*(code *)*DAT_100578d0)(param_1,local_29[0]);
  }
  return;
}

