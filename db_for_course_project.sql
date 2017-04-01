DROP TABLE "reports";
DROP TABLE "courses_taught";
DROP TABLE "examinations";
DROP TABLE "students_supervised";
DROP TABLE "comp_student_reports";
DROP TABLE "comp_phd_theses";
DROP TABLE "grants";
DROP TABLE "research_projects";
DROP TABLE "research_collaborations";
DROP TABLE "conference_publications";
DROP TABLE "journal_publications";
DROP TABLE "patents";
DROP TABLE "ip_licensing";
DROP TABLE "best_paper_awards";
DROP TABLE "memberships";
DROP TABLE "prizes";
DROP TABLE "industry_collaborations";
DROP TABLE "other_info";

CREATE TABLE "reports" (
"id" INTEGER NOT NULL,
"nameOfUnit" TEXT NOT NULL,
"nameOfHeadUnit" TEXT NOT NULL,
"startOfRepPeriod" TEXT NOT NULL,
"endOfRepPeriod" TEXT NOT NULL,
PRIMARY KEY ("id") 
);

CREATE TABLE "courses_taught" (
"id" INTEGER NOT NULL,
"report_id" INTEGER NOT NULL,
"name" TEXT NOT NULL,
"semester" TEXT NOT NULL,
"level" TEXT NOT NULL,
"appNumOfStudents" INTEGER NOT NULL,
PRIMARY KEY ("id") ,
CONSTRAINT "fk_coursesTaught_reports_1" FOREIGN KEY ("report_id") REFERENCES "reports" ("id")
);

CREATE TABLE "examinations" (
"id" INTEGER NOT NULL,
"report_id" INTEGER NOT NULL,
"name" TEXT NOT NULL,
"semester" TEXT NOT NULL,
"kindOfExam" TEXT NOT NULL,
"appNumOfStudents" INTEGER NOT NULL,
PRIMARY KEY ("id") ,
CONSTRAINT "fk_examinations_reports_1" FOREIGN KEY ("report_id") REFERENCES "reports" ("id")
);

CREATE TABLE "students_supervised" (
"id" INTEGER NOT NULL,
"report_id" INTEGER NOT NULL,
"studentName" TEXT NOT NULL,
"work" TEXT NOT NULL,
PRIMARY KEY ("id") ,
CONSTRAINT "fk_students_supervised_reports_1" FOREIGN KEY ("report_id") REFERENCES "reports" ("id")
);

CREATE TABLE "comp_student_reports" (
"id" INTEGER NOT NULL,
"report_id" INTEGER NOT NULL,
"studentName" TEXT NOT NULL,
"reportTitle" TEXT NOT NULL,
"publicationPlan" BLOB NOT NULL,
PRIMARY KEY ("id") ,
CONSTRAINT "fk_comp_student_reports_reports_1" FOREIGN KEY ("report_id") REFERENCES "reports" ("id")
);

CREATE TABLE "comp_phd_theses" (
"id" INTEGER NOT NULL,
"report_id" INTEGER NOT NULL,
"studentName" TEXT NOT NULL,
"degree" TEXT NOT NULL,
"nameOfSupervisor" TEXT NOT NULL,
"commiteeMembers" TEXT NOT NULL,
"degreeGrantingInst" TEXT NOT NULL,
"titleOfDissertation" TEXT NOT NULL,
PRIMARY KEY ("id") ,
CONSTRAINT "fk_comp_phd_theses_reports_1" FOREIGN KEY ("report_id") REFERENCES "reports" ("id")
);

CREATE TABLE "grants" (
"id" INTEGER NOT NULL,
"report_id" INTEGER NOT NULL,
"titleOfProject" TEXT NOT NULL,
"grantingAgency" TEXT NOT NULL,
"period" TEXT NOT NULL,
"amount" TEXT NOT NULL,
PRIMARY KEY ("id") ,
CONSTRAINT "fk_grants_reports_1" FOREIGN KEY ("report_id") REFERENCES "reports" ("id")
);

CREATE TABLE "research_projects" (
"id" INTEGER NOT NULL,
"report_id" INTEGER NOT NULL,
"titleOfProject" TEXT NOT NULL,
"UIPersonnelInvolved" TEXT NOT NULL,
"externalPersonnelInvolved" TEXT NOT NULL,
"startDate" TEXT NOT NULL,
"endDate" TEXT NOT NULL,
"financing" TEXT NOT NULL,
PRIMARY KEY ("id") ,
CONSTRAINT "fk_research_projects_reports_1" FOREIGN KEY ("report_id") REFERENCES "reports" ("id")
);

CREATE TABLE "research_collaborations" (
"id" INTEGER NOT NULL,
"report_id" INTEGER NOT NULL,
"country" TEXT NOT NULL,
"institutionName" TEXT NOT NULL,
"contacts" TEXT NOT NULL,
"collaborationNature" TEXT NOT NULL,
PRIMARY KEY ("id") ,
CONSTRAINT "fk_research_collaborations_reports_1" FOREIGN KEY ("report_id") REFERENCES "reports" ("id")
);

CREATE TABLE "conference_publications" (
"id" INTEGER NOT NULL,
"report_id" INTEGER NOT NULL,
"publication" TEXT NOT NULL,
PRIMARY KEY ("id") ,
CONSTRAINT "fk_conference_publications_reports_1" FOREIGN KEY ("report_id") REFERENCES "reports" ("id")
);

CREATE TABLE "journal_publications" (
"id" INTEGER NOT NULL,
"report_id" INTEGER NOT NULL,
"publication" TEXT NOT NULL,
PRIMARY KEY ("id") ,
CONSTRAINT "fk_journal_publications_reports_1" FOREIGN KEY ("report_id") REFERENCES "reports" ("id")
);

CREATE TABLE "patents" (
"id" INTEGER NOT NULL,
"report_id" INTEGER NOT NULL,
"patent" TEXT NOT NULL,
"country" TEXT NOT NULL,
PRIMARY KEY ("id") ,
CONSTRAINT "fk_patents_reports_1" FOREIGN KEY ("report_id") REFERENCES "reports" ("id")
);

CREATE TABLE "ip_licensing" (
"id" INTEGER NOT NULL,
"report_id" INTEGER NOT NULL,
"license" TEXT NOT NULL,
PRIMARY KEY ("id") ,
CONSTRAINT "fk_ip_licensing_reports_1" FOREIGN KEY ("report_id") REFERENCES "reports" ("id")
);

CREATE TABLE "best_paper_awards" (
"id" INTEGER NOT NULL,
"report_id" INTEGER NOT NULL,
"authors" TEXT NOT NULL,
"article" TEXT NOT NULL,
"awardingConOrJournal" TEXT NOT NULL,
"award" TEXT NOT NULL,
"date" TEXT NOT NULL,
PRIMARY KEY ("id") ,
CONSTRAINT "fk_best_paper_awards_reports_1" FOREIGN KEY ("report_id") REFERENCES "reports" ("id")
);

CREATE TABLE "memberships" (
"id" INTEGER NOT NULL,
"report_id" INTEGER NOT NULL,
"nameOfMember" TEXT NOT NULL,
"date" TEXT NOT NULL,
PRIMARY KEY ("id") ,
CONSTRAINT "fk_memberships_reports_1" FOREIGN KEY ("report_id") REFERENCES "reports" ("id")
);

CREATE TABLE "prizes" (
"id" INTEGER NOT NULL,
"report_id" INTEGER NOT NULL,
"recipient" TEXT NOT NULL,
"nameOfPrize" TEXT NOT NULL,
"grantingInst" TEXT NOT NULL,
"date" TEXT NOT NULL,
PRIMARY KEY ("id") ,
CONSTRAINT "fk_prizes_reports_1" FOREIGN KEY ("report_id") REFERENCES "reports" ("id")
);

CREATE TABLE "industry_collaborations" (
"id" INTEGER NOT NULL,
"report_id" INTEGER NOT NULL,
"company" TEXT NOT NULL,
"nature_of_collaboration" TEXT NOT NULL,
PRIMARY KEY ("id") ,
CONSTRAINT "fk_industry_collaborations_reports_1" FOREIGN KEY ("report_id") REFERENCES "reports" ("id")
);

CREATE TABLE "other_info" (
"id" INTEGER NOT NULL,
"report_id" INTEGER NOT NULL,
"otherInfo" TEXT NOT NULL,
PRIMARY KEY ("id") ,
CONSTRAINT "fk_other_info_reports_1" FOREIGN KEY ("report_id") REFERENCES "reports" ("id")
);

