/* FUN_14032484 @ 0x14032484 */

void FUN_14032484(void)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = DAT_1403251c;
  if (*DAT_1403251c == '\0') {
    FUN_1403666c(DAT_14032520,4);
    FUN_140e5398(800);
    FUN_140e5398(0x640);
    cVar1 = *pcVar2;
  }
  else {
    FUN_140313b0(DAT_14032520,4);
    FUN_140e5398(0x640);
    cVar1 = *pcVar2;
  }
  if (cVar1 == '\0') {
    FUN_1403666c(DAT_14032524,5);
    FUN_140e5398(800);
    FUN_140e5398(0x640);
    cVar1 = *pcVar2;
  }
  else {
    FUN_140313b0(DAT_14032524,5);
    FUN_140e5398(0x640);
    cVar1 = *pcVar2;
  }
  if (cVar1 == '\0') {
    FUN_1403666c(DAT_14032528,7);
    FUN_140e5398(800);
  }
  else {
    FUN_140313b0(DAT_14032528,7);
  }
  FUN_140e5398(0x640);
  *DAT_1403252c = 1;
  return;
}

