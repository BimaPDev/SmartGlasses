/* FUN_10070258 @ 0x10070258 */

undefined4 FUN_10070258(int param_1,undefined4 param_2,short *param_3,undefined4 param_4)

{
  short sVar1;
  bool bVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x10);
  switch(param_2) {
  case 0:
    sVar1 = *param_3;
    *(bool *)(iVar6 + 9) = sVar1 == 0x405;
    if (sVar1 == 0x405) {
      *(undefined1 *)(iVar6 + 10) = 1;
      return param_2;
    }
    break;
  case 1:
    *(undefined4 *)(iVar6 + 4) = *(undefined4 *)param_3;
    uVar4 = FUN_1005fb14();
    *(char *)(iVar6 + 8) = (char)(uVar4 >> 3);
    break;
  case 2:
    *(short **)(iVar6 + 0xc) = param_3;
    *(undefined4 *)(iVar6 + 0x10) = param_4;
    break;
  case 3:
    *(short **)(iVar6 + 0x14) = param_3;
    *(undefined4 *)(iVar6 + 0x18) = param_4;
    break;
  case 4:
    if (*(char *)(iVar6 + 9) != '\0') {
      *(undefined1 *)(iVar6 + 9) = 0;
      do {
        if (*(int *)(iVar6 + 0x1c) < 1) {
          uVar5 = 0;
LAB_100702fe:
          *(undefined1 *)(iVar6 + 9) = 1;
          FUN_10070204((undefined1 *)(iVar6 + 9));
          return uVar5;
        }
        if ((int)param_3 < 1) {
          FUN_10119dc2(DAT_10070374,*(undefined4 *)(DAT_10070370 + 0x30c));
          pcVar3 = DAT_10070378;
          uVar5 = 0;
          bVar2 = (bool)isCurrentModePrivileged();
          if (bVar2) {
            uVar5 = getBasePriority();
          }
          bVar2 = (bool)isCurrentModePrivileged();
          if ((bVar2) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
            setBasePriority(0x20);
          }
          InstructionSynchronizationBarrier(0xf);
          while (0 < *(int *)(iVar6 + 0x1c)) {
            (*pcVar3)(iVar6,1);
          }
          bVar2 = (bool)isCurrentModePrivileged();
          if (bVar2) {
            setBasePriority(uVar5);
          }
          InstructionSynchronizationBarrier(0xf);
          uVar5 = 0xffffffc2;
          goto LAB_100702fe;
        }
        FUN_101153fc(2,0);
        param_3 = param_3 + -1;
      } while( true );
    }
    break;
  case 5:
    if (((*(char *)(iVar6 + 9) == '\0') && ((uint)*(byte *)(iVar6 + 10) != ((uint)param_3 & 0xff)))
       && (*(char *)(iVar6 + 10) = (char)param_3, ((uint)param_3 & 0xff) == 1)) {
      uVar5 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        uVar5 = getBasePriority();
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if ((bVar2) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      *(byte *)(iVar6 + 0x30) = *(byte *)(iVar6 + 0x30) & 0xfd | (0 < *(int *)(iVar6 + 0x1c)) << 1;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(uVar5);
      }
      InstructionSynchronizationBarrier(0xf);
      if ((int)((uint)*(byte *)(iVar6 + 0x30) << 0x1e) < 0) {
        FUN_1011401c(iVar6 + 0x34,uVar5,5000,0);
        return 0;
      }
    }
    break;
  default:
    return 0xffffffea;
  }
  return 0;
}

