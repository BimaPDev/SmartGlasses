/* FUN_100e5168 @ 0x100e5168 */

void FUN_100e5168(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,ushort param_5)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 *puVar4;
  ushort uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  code *pcVar9;
  undefined4 local_28;
  char *local_24;
  
  uVar8 = (uint)param_5;
  local_28 = param_3;
  local_24 = param_4;
  FUN_100e4fc0(0xffffffff,0xffffffff,param_3,param_4,param_1,param_2);
  puVar4 = (undefined4 *)FUN_100e4ed0(param_1,param_2);
  if (puVar4 == (undefined4 *)0x0) {
    FUN_100a5b78(DAT_100e52a4 | (DAT_100e529c - DAT_100e52a0) * 0x20 & 0xff00U,DAT_100e52a8);
  }
  else if (*(byte *)((int)puVar4 + 10) < 7) {
    bVar1 = *(byte *)(puVar4 + 5);
    uVar6 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      pcVar7 = param_4;
      if (param_3 == 1) {
        while (uVar6 < uVar8) {
          cVar2 = *pcVar7;
          sVar3 = (short)uVar6;
          if (cVar2 == '\x12') {
            uVar5 = sVar3 + 4;
          }
          else {
            if (cVar2 == '\x19') {
              if ((puVar4[6] != 0) && (pcVar9 = *(code **)(puVar4[6] + 0x10), pcVar9 != (code *)0x0)
                 ) {
                local_24 = pcVar7 + 2;
                local_28 = CONCAT31(CONCAT12(pcVar7[1],(undefined2)local_28) >> 8,1);
                (*pcVar9)(*puVar4,*(undefined1 *)((int)puVar4 + 9),&local_28,1);
              }
            }
            else if (cVar2 == '\r') {
              uVar5 = sVar3 + 3;
              goto LAB_100e51ec;
            }
            uVar5 = sVar3 + (ushort)(byte)pcVar7[1] + 2;
          }
LAB_100e51ec:
          uVar6 = (uint)uVar5;
          pcVar7 = param_4 + uVar6;
        }
      }
      else if (param_3 == 2) {
        FUN_100a5b78((DAT_100e529c - DAT_100e52a0) * 0x20 & 0xff00U | 0x2280031,DAT_100e52ac,uVar8);
        local_28 = CONCAT22(param_5,(undefined2)local_28);
        local_28 = CONCAT31(local_28._1_3_,2);
        local_24 = param_4;
        if (((uVar8 != 0) && (puVar4[6] != 0)) &&
           (pcVar9 = *(code **)(puVar4[6] + 0x10), pcVar9 != (code *)0x0)) {
          (*pcVar9)(*puVar4,*(undefined1 *)((int)puVar4 + 9),&local_28,1);
        }
        FUN_100e057c(*puVar4,*(undefined1 *)(puVar4 + 2),0,0,0);
      }
      else if (param_3 != 4) {
        FUN_100a5b78(DAT_100e52b0 | (DAT_100e529c - DAT_100e52a0) * 0x20 & 0xff00U,DAT_100e52b4,
                     param_3);
      }
    }
    else {
      *(byte *)(puVar4 + 5) = bVar1 & 0xfe;
      FUN_100e0754(*puVar4,*(undefined1 *)(puVar4 + 2),0);
      *(undefined1 *)((int)puVar4 + 10) = 7;
    }
  }
  FUN_100e4fb4();
  return;
}

